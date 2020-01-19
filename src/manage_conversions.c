/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_conversions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:23:15 by hde-ghel          #+#    #+#             */
/*   Updated: 2020/01/19 16:34:52 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		print_conversions(t_printf *env, t_option *options)
{

	//TOUtES LES PROTECTION A LINK
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
	return (0);
}

int		count_digit_ull(unsigned long long nb,  unsigned int base)
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

char		*ull_itoa(unsigned long long n)
{
	int			len;
	char		*str;

	//if (n == LONG_MIN)
	//	return (!(str = ft_strdup("9223372036854775808")) ? NULL : str);
	len = count_digit_ull(n, 10);
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[0] = '0';
	while (n)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return(str);
}

