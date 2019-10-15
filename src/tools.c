/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:41:45 by hde-ghel          #+#    #+#             */
/*   Updated: 2019/10/12 14:10:28 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
//peut etre plus rapide de malloc une str et de la printf a la place des while printf_char
void		padding(t_option *options, int len, char c)
{
	if (len <= 0)
		return ;
	while (len--)
	{
		write(1, &c, 1);
		options->arg_length += 1;
	}
}

void		putstr_len(char *str, t_option *options)
{
	int		len;

	if (!str)
		return ;
	len = ft_strlen(str);
	write(1, str, len);
	options->arg_length += len;
}

void		putchar_len(char c, t_option *options)
{
	write(1, &c, 1);
	options->arg_length += 1;
}
