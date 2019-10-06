#include "../include/ft_printf.h"

void		get_flags(t_printf *env, t_option *options)
{
	while (*env->format == '+' || *env->format == '-' || *env->format == ' ' ||
			*env->format == '0' || *env->format == '#')
	{
		if (*env->format == '+')
			options->flag_plus = 1;
		else if (*env->format == '-')
			options->flag_moins = 1;
		else if (*env->format == ' ')
			options->flag_space = 1;
		else if (*env->format == '0')
			options->flag_zero = 1;
		else if (*env->format == '#')
			options->flag_sharp = 1;
		env->format++;
	}
}

void		get_width(t_printf *env, t_option *options)
{
	if (*env->format == '*')
	{
		options->width = va_arg(env->va, int);
		if (options->width < 0)
		{
			options->width *= -1;
			options->flag_moins = 1;
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

void		get_precision(t_printf *env, t_option *options)
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

void		get_length_modifiers(t_printf *env, t_option *options)
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
	ft_bzero(&options, sizeof(options));
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
