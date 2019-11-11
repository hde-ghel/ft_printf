/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_conversions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:23:15 by hde-ghel          #+#    #+#             */
/*   Updated: 2019/11/11 17:08:28 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"


void		no_conversion(t_printf *env)
{
	if (env->unused == 100)
		ft_putstr("mon cul");
}

int		print_conversions(t_printf *env, t_option *options)
{

	//PROTECTION A LINK
	options->conversion = *env->format;
	if (options->conversion == 'c')
		print_char(env, options);
	else if (options->conversion == 's')
		print_string(env, options);
	else if (options->conversion == 'p')
		print_p(env, options);
	else if (options->conversion == '%')
		print_percent(env, options);
	else if (options->conversion == 'd' || options->conversion == 'i')
		print_d_i(env, options);
	/*
	else if (options->conversion == 'o')
	else if (options->conversion == 'u')
	else if (options->conversion == 'x')
	else if (options->conversion == 'X')
	else if (options->conversion == 'f')
	else if (options->conversion == 'b')
	else if (options->conversion == '%')
		print_percent(env, options);
	else
		no_conversion(env);
*/
	
	return (0);
}
