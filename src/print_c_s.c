/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:41:47 by hde-ghel          #+#    #+#             */
/*   Updated: 2019/11/04 19:22:11 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void		print_char(t_printf *env, t_option *options)
{
	if (options->flag_left != 1)
		padding(options, options->width - 1, (options->flag_zero ? '0' : ' '));
	ft_putchar(va_arg(env->va, int));
	options->arg_length += 1;
	if (options->flag_left == 1)
		padding(options, options->width - 1, (options->flag_zero ? '0' : ' '));
	env->format++;
}

void		print_string(t_printf *env, t_option *options)
{
	char	*str;
	int		len;
	int		arg_len;

	str = va_arg(env->va, char *);
	arg_len = ft_strlen(str);
	len = (options->precision >= 0) ? options->precision : ft_strlen(str);
	if (len > arg_len)
		len = arg_len;
	if (options->width > len && !options->flag_left)
		padding(options, options->width - len, options->flag_zero ? '0' : ' ');
	if (len)
		putstr_len(str, options, len);
	if (options->width > len && options->flag_left)
		padding(options, options->width - len, ' ');
	env->format++;
}

int		print_p(t_printf *env, t_option *options)
{
	char		*str;
	int			len;
	uintmax_t	n;

	n = va_arg(env->va, uintmax_t);
	if (!(str = unitoa(n, "0123456789abcdef", 16)))
		return (-1);
	len = ft_strlen(str) + 2;
	return (0);
}
