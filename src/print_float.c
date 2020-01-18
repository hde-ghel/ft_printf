/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_float.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:58:44 by hde-ghel          #+#    #+#             */
/*   Updated: 2020/01/18 17:11:42 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"


static int		print_nan_inf(t_printf *env, t_option *options, long double nb)
{
	int		len;
	char	*str;

	str = ft_isnan(nb) ? "nan" : "inf";
	len = 3;
	if (options->width > len && !options->flag_left)
		padding(options, options->width - len, options->flag_zero ? '0' : ' ');
	putstr_len(str, options, len);
	if (options->width > len && options->flag_left)
		padding(options, options->width - len, ' ');
	env->format++;
	return (0);
}

long		precision_multiplier(t_option *options)
{
	int		i;
	long	ret;

	i = 0;
	ret = 1;
	if (options->precision == -1)
		options->precision = 6;
	while (i != options->precision)
	{
		ret *= 10;
		i++;
	}
	return (ret);
}

char		*ftoa(t_option *options, long double n)
{
	char			*d_str;
	char			*f_str;
	long double		float_part;
	long double		nb;

	options->f_sign = (n < 0) ? 1 : 0;
	nb = (n < 0) ? -n :n;
	float_part = nb - (unsigned long long)nb + 1;
	float_part *= precision_multiplier(options);
	if ((float_part - (unsigned long long)float_part) >= 0.5)
		float_part++;
	if ((float_part / precision_multiplier(options)) > 2)
		nb += 1;
	// a proteger
	d_str = l_itoa((unsigned long long)nb);
	//d_str = (n < 0) ? ft_strjoin_free("-", d_str, 2) : d_str;
	if (options->precision == 0 && options->flag_sharp)
		return (ft_strjoin_free(d_str, ".", 1));
	if (options->precision == 0)
		return (d_str);
	if (!(f_str = l_itoa((unsigned long long)float_part)))
		return (NULL);
	d_str = ft_strjoin_free(d_str, ".", 1);
	d_str = ft_strjoin_free(d_str, f_str + 1, 1);
	ft_strdel(&f_str);
	return (d_str);
}

static void		displa_float(t_option *options)
{
	int		sign;
	int		len;

	sign = (options->f_sign || options->flag_plus) ? 1 : 0;
	len = ft_strlen(options->f_str);
	(!options->precision && !options->flag_sharp) ? len-- : 0;
	if (options->precision <= len && options->flag_space && !sign)
	{
		putchar_len(' ', options);
		options->width--;
	}
	if (options->width > len && !options->flag_left && !options->flag_zero)
		padding(options, options->width - len - sign, ' ');
	options->f_sign ? putchar_len('-', options) : 0;
	(options->flag_plus && !options->f_sign) ? putchar_len('+', options) : 0;
	if (options->width > len && !options->flag_left && options->flag_zero)
		padding(options, options->width - len - sign, '0');
	putstr_len(options->f_str, options, 0);
	//(!options->precision && !options->flag_sharp) ? 0 : putchar_len('.', options);
	if (options->width > len && options->flag_left)
		padding(options, options->width - len - sign, ' ');
}

int			manage_float(t_printf *env, t_option *options)
{
	long double	nb;

	nb = (options->mod_L == 0) ? va_arg(env->va, double) : va_arg(env->va, long double);
	if (ft_isnan(nb) || ft_isinf(nb))
		return(print_nan_inf(env, options, nb));
	if(!(options->f_str = ftoa(options, nb)))
		return (-1);
	displa_float(options);
	env->format++;
	return (0);
}
