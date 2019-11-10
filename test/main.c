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

	//void	*p = (void *)0x000000000000;
	void	*p = NULL;

	return_pf =    printf("real pf =%2p\n", p);
	printf("%d\n", return_pf);
	return_pf = ft_printf("noob pf =%2p\n", p);
	printf("%d\n", return_pf);

	p = (void *)0x000000000001;
	return_pf =    printf("real pf =%.p\n", p);
	printf("%d\n", return_pf);
	return_pf = ft_printf("noob pf =%.p\n", p);
	printf("%d\n", return_pf);


	return_pf =    printf("real pf =%ld", LONG_MIN);
	printf("%d\n", return_pf);
	return_pf = ft_printf("noob pf =%ld", LONG_MIN);
	printf("%d\n", return_pf);

	return(0);
}
