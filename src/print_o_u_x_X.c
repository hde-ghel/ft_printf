/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_o_u_x_X.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 13:52:12 by hde-ghel          #+#    #+#             */
/*   Updated: 2020/01/17 14:53:42 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static uintmax_t	get_unsinged_type(uintmax_t nb, t_option *options)
{
	if (options->mod_h == 2)
		nb = (unsigned char)nb;
	else if (options->mod_h == 1)
		nb = (unsigned short)nb;
	else if (options->mod_l == 1)
		nb = (unsigned long)nb;
	else if (options->mod_l == 2)
		nb = (unsigned long long)nb;
	else
		nb = (unsigned int)nb;
	return (nb);
}

static	void	print_hex(t_option *options, uintmax_t nb, char *str)
{
	int		nb_len;
	int		full_len;

	nb_len = ft_strlen(str);
	//fprintf(stdout, "\033[31m precision = %d \n\33[0m", options->precision);
	full_len = (options->precision > nb_len ? options->precision : nb_len);
	if (!nb && !options->precision)
		full_len--;
	options->flag_sharp *= 2;
	if ((options->width > full_len && !options->flag_left && !options->flag_zero) ||
		(options->precision != -1 && !options->flag_left && options->flag_zero))
		padding(options, options->width - full_len - (nb ? options->flag_sharp : 0), ' ');
	if (options->flag_sharp && nb)
		putstr_len((options->conversion == 'x') ? "0x" : "0X", options, 2);
	if (options->precision > nb_len)
		padding(options, options->precision - nb_len, '0');
	if (options->width && options->precision < 0 && !options->flag_left && options->flag_zero)
		padding(options, options->width - nb_len - (nb ? options->flag_sharp : 0), '0');
	if (nb || options->precision)
		putstr_len(str, options, 0);
	if (options->width > full_len && options->flag_left)
		padding(options, options->width - full_len - (nb ? options->flag_sharp :0), ' ');
}

static	void	print_o_u(t_option *options, uintmax_t nb, char *str)
{
	int nb_len;
	int full_len;

	nb_len = ft_strlen(str);
	full_len = (options->precision > nb_len ? options->precision : nb_len);
	(!nb && !options->precision && !options->flag_sharp) ? full_len-- : 0;
	if ((options->width > full_len && !options->flag_left && !options->flag_zero) || \
		(options->precision != -1 && !options->flag_left && options->flag_zero))
		padding(options, options->width - full_len - 
		(nb && options->precision <= nb_len ? options->flag_sharp : 0), ' ');
	if (options->flag_sharp && nb && options->conversion == 'o')
		putchar_len('0', options);
	if (options->precision > nb_len)
		padding(options, options->precision - nb_len - (nb ? options->flag_sharp : 0), '0');
	if (options->width && options->precision < 0 && !options->flag_left && options->flag_zero)
		padding(options, options->width - nb_len - (nb ? options->flag_sharp : 0), '0');
	if (nb || options->precision || options->flag_sharp)
		putstr_len(str, options, 0);
	if (options->width > full_len && options->flag_left)
		padding(options, options->width - full_len - \
		(nb && options->precision <= nb_len ? options->flag_sharp : 0), ' ');
}

static	char	*format_itoa(t_printf *env, uintmax_t nb)
{
	if (*env->format == 'x')
		return(u_itoa(nb, "0123456789abcdef", 16));
	else if (*env->format == 'X')
		return(u_itoa(nb, "0123456789ABCDEF", 16));
	else if (*env->format == 'o')
		return(u_itoa(nb, "01234567", 8));
	else if (*env->format == 'u')
		return(u_itoa(nb, "0123456789", 10));
	return (NULL);
}

int		print_ouxX(t_printf *env, t_option *options)
{
	uintmax_t	nb;
	char		*str;

	nb = va_arg(env->va, uintmax_t);
	nb = get_unsinged_type(nb, options);
	if (!(str = format_itoa(env, nb)))
		return (-1);
	if (*env->format == 'x')
		print_hex(options, nb, str);
	else if (*env->format == 'X')
		print_hex(options, nb, str);
	else if (*env->format == 'o')
		print_o_u(options, nb, str);
	else if (*env->format == 'u')
		print_o_u(options, nb, str);
	ft_strdel(&str);
	env->format++;
	return (0);
}
