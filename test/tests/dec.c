
#include <stdio.h>
#include <float.h>
#include <limits.h>
#include "../../include/ft_printf.h"

int main()
{

	int a;


		//DECI\\

		//1
		printf ("printf1     :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n", 0,0,0,0,0);
		ft_printf ("ft_printf1  :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n\n", 0,0,0,0,0);
		//2
		printf ("printf2     :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n", 0,0,0,0,0);
		ft_printf ("ft_printf2  :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n\n", 0,0,0,0,0);
		//3
		printf ("printf3     :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n", 0,0,0,0,0);
		ft_printf ("ft_printf3  :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n\n", 0,0,0,0,0);
		//4
		printf ("printf4     :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n", 0,0,0,0,0);
		ft_printf ("ft_printf4  :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n\n", 0,0,0,0,0);
		//5
		printf ("printf5     :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", 0,0,0,0,0);
		ft_printf ("ft_printf5  :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n\n", 0,0,0,0,0);
		//6
		printf ("printf6     :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 0,0,0,0,0);
		ft_printf ("ft_printf6  :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n\n", 0,0,0,0,0);
		//7
		printf("printf7      :|% 03d|\n", 0);
		ft_printf ("ft_printf7   :|% 03d|\n", 0);




			//DECI\\

			//1
			printf ("printf1     :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n", 1,1,1,1,1);
			ft_printf ("ft_printf1  :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n\n", 1,1,1,1,1);
			//2
			printf ("printf2     :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n", 1,1,1,1,1);
			ft_printf ("ft_printf2  :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n\n", 1,1,1,1,1);
			//3
			printf ("printf3     :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n", 1,1,1,1,1);
			ft_printf ("ft_printf3  :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n\n", 1,1,1,1,1);
			//4
			printf ("printf4     :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n", 1,1,1,1,1);
			ft_printf ("ft_printf4  :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n\n", 1,1,1,1,1);
			//5
			printf ("printf5     :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", 1,1,1,1,1);
			ft_printf ("ft_printf5  :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n\n", 1,1,1,1,1);
			//6
			printf ("printf6     :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 1,1,1,1,1);
			ft_printf ("ft_printf6  :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n\n", 1,1,1,1,1);
			//7
			printf("printf7      :|% 03d|\n", 0);
			ft_printf ("ft_printf7   :|% 03d|\n", 0);



				//DECI\\

				//1
				printf ("printf1     :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n", 999,999,999,999,999);
				ft_printf ("ft_printf1  :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n\n", 999,999,999,999,999);
				//2
				printf ("printf2     :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n", 999,999,999,999,999);
				ft_printf ("ft_printf2  :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n\n", 999,999,999,999,999);
				//3
				printf ("printf3     :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n", 999,999,999,999,999);
				ft_printf ("ft_printf3  :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n\n", 999,999,999,999,999);
				//4
				printf ("printf4     :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n", 999,999,999,999,999);
				ft_printf ("ft_printf4  :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n\n", 999,999,999,999,999);
				//5
				printf ("printf5     :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", 999,999,999,999,999);
				ft_printf ("ft_printf5  :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n\n", 999,999,999,999,999);
				//6
				printf ("printf6     :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 999,999,999,999,999);
				ft_printf ("ft_printf6  :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n\n", 999,999,999,999,999);
				//7
				printf("printf7      :|% 03d|\n", 0);
				ft_printf ("ft_printf7   :|% 03d|\n", 0);



				return (0);
		




}
