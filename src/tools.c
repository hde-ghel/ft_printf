/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:41:45 by hde-ghel          #+#    #+#             */
/*   Updated: 2019/10/23 19:23:50 by hde-ghel         ###   ########.fr       */
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

//peut etre plus rapide de malloc une str et de la printf a la place des while printf_char
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
