/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:22:49 by hde-ghel          #+#    #+#             */
/*   Updated: 2019/11/09 16:41:20 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static	int		dispatch_args(t_printf *env)
{
	t_option	options;// a declarer dans browse_string()

	ft_bzero(&options, sizeof(options));
	options.precision = -1;
	env->format++; //passer le %
	parse_options(env, &options); //check les flagss et autres (voir ordre de check)
	print_conversions(env, &options);

	return (options.arg_length);
}

static	int		print_format(t_printf *env)
{
	char	*str_2;

	str_2 = env->format;
	while(*env->format && *env->format != '%')
		env->format++;
	write (1, str_2, env->format - str_2);
	return(env->format - str_2);
}

static	int		browse_string(t_printf *env)
{
	while(*env->format)
	{
		if (*env->format != '%')
			env->return_value += print_format(env);
		else
			env->return_value += dispatch_args(env);
		//protection a faire sur dispatch_arg changer le return
	}
	return (0);
}

int		ft_printf(const char *format, ...)
{
	t_printf	env;

	if (format == NULL) // faire les check ici si il y en a
		ft_putstr("argument vide");
	ft_bzero(&env, sizeof(env));
	va_start(env.va, format);
	env.format = (char *)format;
	//(probable protection)
	browse_string(&env);
	va_end(env.va);
	return(env.return_value);
}
