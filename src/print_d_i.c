/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 13:27:37 by hde-ghel          #+#    #+#             */
/*   Updated: 2019/11/10 16:30:43 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

static intmax_t	get_s_type(intmax_t n, t_option *options)
{
	if (options->mod_h == 2)
		n = (char)n;
	else if (options->mod_h == 1)
		n = (short int)n;
	else if (options->mod_l == 1)
		n = (long int)n;
	else if (options->mod_l == 2)
		n = (long long int)n;
	else
		n = (int)n;
	return (n);
}

char	*l_itoa(intmax_t n)
{
	int			len;
	intmax_t	nb;
	char		*str;

	if (n == LONG_MIN)
		return (!(str = ft_strdup("-922337203685477580829")) ? NULL : str);
	nb = (n < 0 ? -n : n);
	len = count_digit(nb, 10);
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[0] = '0';
	while (nb)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return(str);
}

void	display_d_i(t_option *options, intmax_t nb, char *str)
{
	int		full_len;
	int		nb_len;
	int		sign;

	sign = (nb < 0 || options->flag_plus) ? 1 : 0;
	nb_len = count_digit(nb < 0 ? -nb : nb, 10);
	full_len = (options->precision <= nb_len ? options->precision : nb_len);
	if (options->precision <= full_len && options->flag_space && !sign)
	{
		putchar_len(' ', options);
		options->width--;
	}

}

int		print_d_i(t_printf *env, t_option *options)
{
	intmax_t	nb;
	char		*str;

	nb = va_arg(env->va, intmax_t);
	nb = get_s_type(nb, options);
	if (!(str = l_itoa(nb)))
		return (-1);
	display_d_i(options, nb, str);

	ft_strdel(&str);
	env->format++;
	return (0);
}