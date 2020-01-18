/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:22:49 by hde-ghel          #+#    #+#             */
/*   Updated: 2020/01/18 11:09:21 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static	int		dispatch_args(t_printf *env)
{
	t_option	options;// a declarer dans browse_string()

	ft_bzero(&options, sizeof(options));
	options.precision = -1;
	env->format++;
	parse_options(env, &options);
	print_conversions(env, &options);//a proteger jusqu au main
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
	int		arg_length;

	while(*env->format)
	{
		if (*env->format != '%')
			env->return_value += print_format(env);
		else
		{
			if ((arg_length = dispatch_args(env)) == -1)
				return (-1);
			env->return_value += arg_length;
		}
		//protection a faire sur dispatch_arg
	}
	return (0);
}

int		ft_printf(const char *format, ...)
{
	t_printf	env;

	ft_bzero(&env, sizeof(env));
	va_start(env.va, format);
	env.format = (char *)format;
	//(protection)
	if (browse_string(&env) == -1) // malloc erreur
		return (-1);
	va_end(env.va);
	return(env.return_value);
}
