/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_options.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:22:59 by hde-ghel          #+#    #+#             */
/*   Updated: 2019/12/14 13:08:13 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static	void		get_flags(t_printf *env, t_option *options)
{
	while (*env->format == '+' || *env->format == '-' || *env->format == ' ' ||
			*env->format == '0' || *env->format == '#')
	{
		if (*env->format == '+')
			options->flag_plus = 1;
		else if (*env->format == '-')
			options->flag_left = 1;
		else if (*env->format == ' ')
			options->flag_space = 1;
		else if (*env->format == '0')
			options->flag_zero = 1;
		else if (*env->format == '#')
			options->flag_sharp = 1;
		env->format++;
	}
}

static	void		get_width(t_printf *env, t_option *options)
{
	if (*env->format == '*')
	{
		options->width = va_arg(env->va, int);
		if (options->width < 0)
		{
			options->width *= -1;
			options->flag_left = 1;
		}
		env->format++;
	}
	if (ft_isdigit(*env->format))
		options->width = 0;
	while (ft_isdigit(*env->format))
	{
		options->width *= 10;
		options->width += *env->format - '0';
		env->format++;
	}
}

static	void		get_precision(t_printf *env, t_option *options)
{
	env->format++;
	if (*env->format == '*')
	{
		options->precision = va_arg(env->va, int);
		if (options->precision < 0)
				options->precision = -1;
		env->format++;
	}
	else
	{
		options->precision = 0;
		while (ft_isdigit(*env->format))
		{
			options->precision *= 10;
			options->precision += *env->format - '0';
			env->format++;
		}
	}
}

static	void		get_length_modifiers(t_printf *env, t_option *options)
{
	char	lenght;

	lenght = *env->format;
	while (*env->format == lenght)
	{
		if (*env->format == 'h')
			options->mod_h++;
		else if (*env->format == 'l')
			options->mod_l++;
		else if (*env->format == 'L')
			options->mod_L++;
		env->format++;
	}
	while (*env->format == 'h' || *env->format == 'l' || *env->format == 'L')
		env->format++;
}

void		parse_options(t_printf *env, t_option *options)
{
	if (*env->format == '+' || *env->format == '-' || *env->format == ' ' ||
		*env->format == '0' || *env->format == '#')
		get_flags(env, options);
	if (ft_isdigit(*env->format) || *env->format == '*')
		get_width(env, options);
	if (*env->format == '.')
		get_precision(env, options);
	if (*env->format == 'h' || *env->format == 'l' || *env->format == 'L')
		get_length_modifiers(env, options);
}
