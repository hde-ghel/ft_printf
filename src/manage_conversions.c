/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_conversions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:23:15 by hde-ghel          #+#    #+#             */
/*   Updated: 2020/01/16 13:34:39 by hde-ghel         ###   ########.fr       */
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

	//TOUES LES PROTECTION A LINK
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
	else if (options->conversion == 'o' || options->conversion == 'u'
			|| options->conversion == 'x' || options->conversion == 'X')
		print_ouxX(env, options);
	else if (options->conversion == 'f')
		manage_float(env, options);
	/*
	else
		no_conversion(env);
		*/
	
	return (0);
}
