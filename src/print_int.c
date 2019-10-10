#include "../include/ft_printf.h"

int		print_int(int nb)
{
	ft_putnbr(nb);
	return (0);
}

int		handle_int(t_printf *env)
{
	int		nb;

	env->format++; //passer l'option
	nb = va_arg(env->va, int);
	print_int(nb);
	return(0);
}
