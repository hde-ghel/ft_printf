#include "../include/ft_printf.h"

void		print_char(t_printf *env, t_option *options)
{
	ft_putchar(va_arg(env->va, int));
	options->arg_length += 1;
	env->format++;
}

void		print_string(t_printf *env, t_option *options)
{
	
	ft_putstr_len();
	env->format++;
}
