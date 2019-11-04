#include "../include/ft_printf.h"
#include <stdio.h>

int		main()
{
	/* /// string \\\
	ft_printf("%5.2s\n", "coucou");
	printf("%5.2s", "coucou");
	*/

	/// pointeur adress %p \\\
	
	char	*str = "coucou";
	void	*p = NULL;
	ft_printf("real pf =%p\n %p\n", p, str);
	printf("noob pf =%p\n %p", p, str);

	return(0);
}
