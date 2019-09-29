#include "../include/ft_printf.h"


int		ft_printf(const char *format, ...)
{
	//va_list	va;
	//va_start(va, format);
	if (format == NULL)
		ft_putstr("le feu");
	ft_putstr("ca compile");
	//va_end(va);
	return(0);
}
