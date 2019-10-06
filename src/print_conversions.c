#include "../include/ft_printf.h"


void		no_conversion(t_printf *env)
{

}

int		print_conversions(t_printf *env, t_option *options)
{

		//fonction print_conversion
	if (*env->format == 'd' || *env->format == 'i' || *env->format == 'o' ||
		*env->format == 'u' || *env->format == 'x' || *env->format == 'X' ||
		*env->format == 'c' || *env->format == 's' || *env->format == 'p' ||
		*env->format == 'f' || *env->format == '%' || *env->format == 'b')
		env->unused = 1;
	else
		no_conversion(env);
	return (0);
}
