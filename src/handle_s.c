#include "../include/ft_printf.h"

int		handle_string(t_printf *env)
{
	char	*str;

	env->format++;
	str = va_arg(env->va, char *);
	ft_putstr(str);
	return (0);
}
