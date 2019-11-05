#include "../include/ft_printf.h"
#include <stdio.h>

int		main()
{
	int		return_pf;
	/* /// string \\\
	ft_printf("%5.2s\n", "coucou");
	printf("%5.2s", "coucou");
	*/

	/// pointeur adress %p \\\
	
	char	*str = "coucou";
	void	*p = (void *)0X000000000010;
	return_pf = printf("real pf =%p\n", str);
	printf("%d\n", return_pf);
	return_pf = ft_printf("noob pf =%p\n", str);
	printf("%d\n", return_pf);

	return(0);
}
