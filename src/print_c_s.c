/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:41:47 by hde-ghel          #+#    #+#             */
/*   Updated: 2019/10/10 11:30:38 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void		print_char(t_printf *env, t_option *options)
{
	if (options->flag_moins != 1)
		padding(options, options->width - 1, (options->flag_zero ? '0' : ' '));
	ft_putchar(va_arg(env->va, int));
	options->arg_length += 1;
	env->format++;
}

void		print_string(t_printf *env, t_option *options)
{
	//if (options->flag_moins != 1)
	//	padding(options, options->width - 1, (options->flag_zero ? '0' : ' '));
	//ft_putstr_len();
	//env->format++;
}
