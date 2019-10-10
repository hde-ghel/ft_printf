#include "../include/ft_printf.h"


void		no_conversion(t_printf *env)
{
	if (env->unused == 100)
		ft_putstr("mon cul");
}

void		print_char(t_printf *env, t_option *options)
{
	if (env->unused == 100 && options->flag_zero)
		ft_putstr("mon cul");
}

int		print_conversions(t_printf *env, t_option *options)
{

	options->conversion = *env->format;
	if (options->conversion == 'c')
		print_char(env, options);
	if (options->conversion == 's')
		print_string(env, options);
		//fonction print_conversion
//	if (*env->format == 'c')
//		print_char(env, options);
		
			/*
			|| *env->format == 'i' || *env->format == 'o' ||
		*env->format == 'u' || *env->format == 'x' || *env->format == 'X' ||
		*env->format == 'c' || *env->format == 's' || *env->format == 'p' ||
		*env->format == 'f' || *env->format == '%' || *env->format == 'b')
		env->unused = 1;
		
	else
		no_conversion(env);
		*/
	return (0);
}
