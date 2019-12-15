#include "../include/ft_printf.h"
#include <stdio.h>

int		main()
{
	int		return_pf;
	long double i;

	i = -7555534344545.5421499;
	printf("%.15Lf\n", i);
	ft_printf("%.15Lf\n", i);
	/* /// string \\\
	ft_printf("%5.2s\n", "coucou");
	printf("%5.2s", "coucou");
	*/

	/// pointeur adress %p \\\

/*
 * char	*str = "coucou";

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


	return_pf =    printf("real pf =%ld\n", LONG_MIN);
	printf("R  return = %d\n", return_pf);
	return_pf = ft_printf("noob pf =%ld\n", LONG_MIN);
	printf("FT return = %d\n", return_pf);
	
    printf("\n{cyan}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░DECI░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");

	return_pf = printf    ("printf1     :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n", 0,0,0,0,0),
	printf("R  return = %d\n", return_pf);
    return_pf = ft_printf ("ft_printf1  :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n", 0,0,0,0,0);
	printf("FT return = %d\n", return_pf);
	//2
	return_pf = printf	  ("printf2     :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n", 0,0,0,0,0),
	printf("R  return = %d\n", return_pf);
    return_pf = ft_printf ("ft_printf2  :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n", 0,0,0,0,0);
	printf("FT return = %d\n", return_pf);
	//3
	return_pf = printf	 ("printf3     :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n", 0,0,0,0,0),
	printf("R  return = %d\n", return_pf);
    return_pf = ft_printf ("ft_printf3  :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n", 0,0,0,0,0);
	printf("FT return = %d\n", return_pf);
	//4
	return_pf = printf    ("printf4     :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n", 0,0,0,0,0),
	printf("R  return = %d\n", return_pf);
    return_pf = ft_printf ("ft_printf4  :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n", 0,0,0,0,0);
	printf("FT return = %d\n", return_pf);
	//5
	return_pf = printf    ("printf5     :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", 0,0,0,0,0),
	printf("R  return = %d\n", return_pf);
    return_pf = ft_printf   ("ft_printf5  :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", 0,0,0,0,0);
	printf("FT return = %d\n", return_pf);
	//6
	return_pf = printf    ("printf6     :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 0,0,0,0,0),
	printf("R  return = %d\n", return_pf);
    return_pf = ft_printf ("ft_printf6  :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 0,0,0,0,0);
	printf("FT return = %d\n", return_pf);
	//
	return_pf = printf    ("printf6    %"),
	printf("R  return = %d\n", return_pf);
    return_pf = ft_printf ("ft_printf6 %");
	printf("FT return = %d\n", return_pf);
	return(0);
	*/
}
