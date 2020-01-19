
#include <stdio.h>
#include <float.h>
#include <limits.h>
#include "../../include/ft_printf.h"

int main()
{

	int a;


		printf("ref : '%010x'\n", 542);
		ft_printf ("test: '%010x'\n", 542);
		printf("ref : '%#010x'\n", 542);
		ft_printf ("test: '%#010x'\n", 542);
		printf ("printf1     :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n", 0,0,0,0,0);
		ft_printf ("ft_printf1  :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n\n", 0,0,0,0,0);
		//2
		printf ("printf2     :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n", 0,0,0,0,0);
		ft_printf ("ft_printf2  :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n\n", 0,0,0,0,0);
		//3
		printf ("printf3     :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n", 0,0,0,0,0);
		ft_printf ("ft_printf3  :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n\n", 0,0,0,0,0);
		//4
		printf ("printf4     :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n", 0,0,0,0,0);
		ft_printf ("ft_printf4  :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n\n", 0,0,0,0,0);
		//5
		printf ("printf5     :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n", 0,0,0,0,0);
		ft_printf ("ft_printf5  :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n\n", 0,0,0,0,0);



			//HEXA\\
			//1
			printf("ref : '%010x'\n", 542);
			ft_printf ("test: '%010x'\n", 542);
			printf("ref : '%#010x'\n", 542);
			ft_printf ("test: '%#010x'\n", 542);
			printf ("printf1     :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n", 1,1,1,1,1);
			ft_printf ("ft_printf1  :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n\n", 1,1,1,1,1);
			//2
			printf ("printf2     :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n", 1,1,1,1,1);
			ft_printf ("ft_printf2  :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n\n", 1,1,1,1,1);
			//3
			printf ("printf3     :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n", 1,1,1,1,1);
			ft_printf ("ft_printf3  :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n\n", 1,1,1,1,1);
			//4
			printf ("printf4     :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n", 1,1,1,1,1);
			ft_printf ("ft_printf4  :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n\n", 1,1,1,1,1);
			//5
			printf ("printf5     :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n", 1,1,1,1,1);
			ft_printf ("ft_printf5  :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n\n", 1,1,1,1,1);




				//HEXA\\

				//1
				printf("ref : '%010x'\n", 542);
				ft_printf ("test: '%010x'\n", 542);
				printf("ref : '%#010x'\n", 542);
				ft_printf ("test: '%#010x'\n", 542);
				printf ("printf1     :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n", 999,999,999,999,999);
				ft_printf ("ft_printf1  :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n\n", 999,999,999,999,999);
				//2
				printf ("printf2     :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n", 999,999,999,999,999);
				ft_printf ("ft_printf2  :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n\n", 999,999,999,999,999);
				//3
				printf ("printf3     :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n", 999,999,999,999,999);
				ft_printf ("ft_printf3  :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n\n", 999,999,999,999,999);
				//4
				printf ("printf4     :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n", 999,999,999,999,999);
				ft_printf ("ft_printf4  :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n\n", 999,999,999,999,999);
				//5
				printf ("printf5     :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n", 999,999,999,999,999);
				ft_printf ("ft_printf5  :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n\n", 999,999,999,999,999);




				return (0);






}
