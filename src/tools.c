/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:41:45 by hde-ghel          #+#    #+#             */
/*   Updated: 2019/11/10 16:30:46 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void		putstr_len(char *str, t_option *options, int len)
{
	if (!str)
		return ;
	len = (!len ? ft_strlen(str) : len);
	write(1, str, len);
	options->arg_length += len;
}

int			padding(t_option *options, int len, char c)
{
	if (len <= 0)
		return (0);
	while (len--)
		write(1, &c, 1);
	options->arg_length += len;
	return (0);
}

void		putchar_len(char c, t_option *options)
{
	write(1, &c, 1);
	options->arg_length += 1;
}

int		count_digit(uintmax_t nb,  unsigned int base)
{
	int		count;
	
	count = 1;
	while (nb >= base)
	{
		nb /= base;
		count++;
	}
	return (count);
}

char	*u_itoa(uintmax_t nb, char *base_char, int base)
{
	char	*str;
	int		len;

	str = NULL;
	len = count_digit(nb, base);
	if (!(str = ft_strnew(len)))
		return (NULL);
	len--;
	if (!nb)
		str[len] = '0';
	while (nb)
	{
		str[len--] = base_char[nb % base];
		nb /= base;
	}
	return (str);
}
