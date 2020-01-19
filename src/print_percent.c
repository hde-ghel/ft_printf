/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:23:32 by hde-ghel          #+#    #+#             */
/*   Updated: 2020/01/19 20:17:30 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		print_percent(t_printf *env, t_option *options)
{
	if (!options->flag_left)
		padding(options, options->width - 1, options->flag_zero ? '0' : ' ');
	putchar_len(*env->format, options);
	if (options->flag_left)
		padding(options, options->width - 1, ' ');
	env->format++;
	return (0);
}
