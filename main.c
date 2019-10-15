#include "include/ft_printf.h"
#include <stdio.h>

int		main()
{
	char *str = "|Mais q elle est belle|";
	int		rt_value;

	rt_value = 0;

	//printf("voici une string : %s", str);
	//printf("voici une string : %s ici un int: %d et ici le reste des char\n", 69);
	rt_value = ft_printf("voici une string : %s ici un charar %c et ici le reste des char\n", str, 'c');
	ft_putstr("return val =");
	ft_putnbr(rt_value);
	return(0);
}
