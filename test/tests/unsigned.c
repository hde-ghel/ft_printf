
#include <stdio.h>
#include <float.h>
#include <limits.h>
#include "../nboulif/includes/ft_printf.h"

int main()
{

	int a;



		//UNSIGNED\\

		//1
		printf ("printf1     :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n", 0,0,0,0,0);
		ft_printf ("ft_printf1  :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n\n", 0,0,0,0,0);
		//2
		printf ("printf2     :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n", 0,0,0,0,0);
		ft_printf ("ft_printf2  :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n\n", 0,0,0,0,0);
		//3
		printf ("printf3     :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n", 0,0,0,0,0);
		ft_printf ("ft_printf3  :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n\n", 0,0,0,0,0);
		//4
		printf ("printf4     :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n", 0,0,0,0,0);
		ft_printf ("ft_printf4  :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n\n", 0,0,0,0,0);
		//5
		printf ("printf5     :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n", 0,0,0,0,0);
		ft_printf ("ft_printf5  :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n\n", 0,0,0,0,0);
		//6
		printf ("printf6     :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n", 0,0,0,0,0);
		ft_printf ("ft_printf6  :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n\n", 0,0,0,0,0);
		//7
		printf("printf7      :|% 03u|\n", 0);
		ft_printf ("ft_printf7   :|% 03u|\n", 0);



			//UNSIGNED\\

			//1
			printf ("printf1     :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n", 1,1,1,1,1);
			ft_printf ("ft_printf1  :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n\n", 1,1,1,1,1);
			//2
			printf ("printf2     :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n", 1,1,1,1,1);
			ft_printf ("ft_printf2  :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n\n", 1,1,1,1,1);
			//3
			printf ("printf3     :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n", 1,1,1,1,1);
			ft_printf ("ft_printf3  :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n\n", 1,1,1,1,1);
			//4
			printf ("printf4     :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n", 1,1,1,1,1);
			ft_printf ("ft_printf4  :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n\n", 1,1,1,1,1);
			//5
			printf ("printf5     :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n", 1,1,1,1,1);
			ft_printf ("ft_printf5  :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n\n", 1,1,1,1,1);
			//6
			printf ("printf6     :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n", 1,1,1,1,1);
			ft_printf ("ft_printf6  :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n\n", 1,1,1,1,1);
			//7
			printf("printf7      :|% 03u|\n", 1);
			ft_printf ("ft_printf7   :|% 03u|\n", 1);




				//UNSIGNED\\

				//1
				printf ("printf1     :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n", 999,999,999,999,999);
				ft_printf ("ft_printf1  :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n\n", 999,999,999,999,999);
				//2
				printf ("printf2     :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n", 999,999,999,999,999);
				ft_printf ("ft_printf2  :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n\n", 999,999,999,999,999);
				//3
				printf ("printf3     :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n", 999,999,999,999,999);
				ft_printf ("ft_printf3  :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n\n", 999,999,999,999,999);
				//4
				printf ("printf4     :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n", 999,999,999,999,999);
				ft_printf ("ft_printf4  :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n\n", 999,999,999,999,999);
				//5
				printf ("printf5     :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n", 999,999,999,999,999);
				ft_printf ("ft_printf5  :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n\n", 999,999,999,999,999);
				//6
				printf ("printf6     :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n", 999,999,999,999,999);
				ft_printf ("ft_printf6  :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n\n", 999,999,999,999,999);
				//7
				printf("printf7      :|% 03u|\n", 999);
				ft_printf ("ft_printf7   :|% 03u|\n", 999);



				return (0);




}
