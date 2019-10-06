#include "../include/ft_printf.h"

void		get_flags(t_printf *env)
{
}

void		get_width(t_printf *env)
{

}

void		get_precision(t_printf *env)
{

}

void		get_modifiers(t_printf *env)
{

}

void		get_conversions(t_printf *env)
{

}

void		no_conversion(t_printf *env)
{

}

int		parse_options(t_printf *env)
{
	if (*env->format == '+' || *env->format == '-' || *env->format == ' ' ||
		*env->format == '0' || *env->format == '#')
		get_flags(env);
	if (ft_isdigit(*env->format) || *env->format == '*')
		get_width(env);
	if (*env->format == '.')
		get_precision(env);
	if (*env->format == 'h' || *env->format == 'l' || *env->format == 'L')
		get_modifiers(env);
	if (*env->format == 'd' || *env->format == 'i' || *env->format == 'o' ||
		*env->format == 'u' || *env->format == 'x' || *env->format == 'X' ||
		*env->format == 'c' || *env->format == 's' || *env->format == 'p' ||
		*env->format == 'f' || *env->format == '%' || *env->format == 'b')
		get_conversions(env);
	else
		no_conversion(env);
	return (0);
}
