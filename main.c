#include "include/ft_printf.h"
#include <stdio.h>

int		main()
{
	int		rt_value;
	char *str = "|Mais q elle est belle|";

	rt_value = 0;
	int	rt_value_2 = 0;

	//printf("voici une string : %s", str);
	//printf("voici une string : %s ici un int: %d et ici le reste des char\n", 69);
	rt_value = ft_printf("FT ici un char %c et ici le reste des char\n", 'c');
	rt_value_2 = printf("PF ici un char %c et ici le reste des char\n", 'c');
	ft_putstr("return val FT =");
	ft_putnbr(rt_value);
	ft_putstr("\nreturn val PF =");
	ft_putnbr(rt_value_2);
	return(0);
}
