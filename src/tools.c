/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:41:45 by hde-ghel          #+#    #+#             */
/*   Updated: 2019/11/04 19:22:13 by hde-ghel         ###   ########.fr       */
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

// a proteger partout !!! ou a changer
int			padding(t_option *options, int len, char c)
{
	char		*padding;

	if (len <= 0)
		return (0);
	if (!(padding = ft_strnew(len + 1)))
		return (-1);
	putstr_len(ft_memset(padding, c, len), options, len);
	ft_strdel(&padding);
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
	while(nb >= base)
	{
		nb /= base;
		count++;
	}
	return (count);
}

char	*unitoa(uintmax_t nb, char *base_char, int base)
{
	char	*str;
	int		nb_digit;

	str = NULL;
	nb_digit = count_digit(nb, base);
	if (!(str = ft_strnew(nb_digit)))
		return (NULL);
	nb_digit--;
	if (!nb)
		str[nb_digit] = '0';
	while (nb)
	{
		str[nb_digit--] = base_char[nb % base];
		nb /= base;
	}
	return (str);
}
