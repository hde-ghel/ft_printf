/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_float.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:58:44 by hde-ghel          #+#    #+#             */
/*   Updated: 2019/12/14 20:04:30 by hde-ghel         ###   ########.fr       */
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

int		precision_multiplier(t_option *options)
{
	int		i;
	int		ret;

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

char		*ftoa(t_printf *env, t_option *options, long double nb)
{
	char		*f_str;
	long double		float_part;
	long double		deci_part;

	if (nb < 0)
		nb *= -1;
	
	float_part = nb - (unsigned long long)nb + 1;
	float_part *= precision_multiplier(options);
	if ((float_part - (unsigned long long)float_part) >= 0.5)
		float_part++;


	if (env->unused )
		f_str = "coucou";

	return (f_str);
}

int			manage_float(t_printf *env, t_option *options)
{
	long double	nb;

	nb = (options->mod_L == 0) ? va_arg(env->va, double) : va_arg(env->va, long double);
	if (ft_isnan(nb) || ft_isinf(nb))
		return(print_nan_inf(env, options, nb));
	

	options->f_str = ftoa(env, options, nb);

	//displa_float(t_option *options, long double nb, char *options->f_str)
	env->format++;
		//protection str
	return (0);
}
