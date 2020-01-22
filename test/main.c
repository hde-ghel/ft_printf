#include "../include/ft_printf.h"
#include <stdio.h>

#define x(p1, p2)    ft_printf("Printf result:    %d\nFt_printf result: %d\n\n", p1, p2 -1)

int		main()
{
	int		return_pf;
	int		i = 65245;
	long	j = -15654654;
	char	*str = "coucou";


	

	printf("%*.*lhl*d\n",10, 8, 100, i);
	ft_printf("%*.*lhl*d\n",10, 8, 100, i);



	//printf("%s %llhi %i %li %i %d %sn",str, i, j, j);
	//ft_printf("%s %llh20i %i %li %i \n",str, i, j, j);
	//printf("%s %10.2ll10hi %i %li \n",str, i, j, j);
	//printf("%s %10.2ll10hi %i %li \n",str, i, j, j);
	//printf("%lmmmmmmmmmmmm20i", i);

/*
	ft_printf("\n{red}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░FLOAT░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
	//1
	x(printf    ("printf1     :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf1  :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n\n", 0,0,0,0,0));
	//2
	x(printf    ("printf2     :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf2  :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n\n", 0,0,0,0,0));
	//3
	x(printf    ("printf2     :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf3  :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n\n", 0,0,0,0,0));
	//4
	x(printf    ("printf4     :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf4  :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n\n", 0,0,0,0,0));
	//5
	x(printf    ("printf5     :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf5  :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n\n", 0,0,0,0,0));
	//6
	x(printf    ("printf6     :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf6  :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n\n", 0,0,0,0,0));
	//7
	x(printf    ("printf7     :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf7  :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n\n", 0,0,0,0,0));
	//8
	x(printf    ("printf8     :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf8  :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n\n", 0,0,0,0,0));
	//9
	x(printf    ("printf9     :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 0,0,0,0,0),
      ft_printf ("ft_printf9  :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 0,0,0,0,0));

			ft_printf("\n{red}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░FLOAT░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
			//1
			x(printf    ("printf1     :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n", 1.1,1.1,1.1,1.1,1.1),
		      ft_printf ("ft_printf1  :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
			//2
			x(printf    ("printf2     :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 1.1,1.1,1.1,1.1,1.1),
		      ft_printf ("ft_printf2  :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
			//3
			x(printf    ("printf3     :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n", 1.1,1.1,1.1,1.1,1.1),
		      ft_printf ("ft_printf3  :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
			//4
			x(printf    ("printf4     :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 1.1,1.1,1.1,1.1,1.1),
		      ft_printf ("ft_printf4  :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
			//5
			x(printf    ("printf5     :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n", 1.1,1.1,1.1,1.1,1.1),
		      ft_printf ("ft_printf5  :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
			//6
			x(printf    ("printf6     :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n", 1.1,1.1,1.1,1.1,1.1),
		      ft_printf ("ft_printf6  :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
			//7
			x(printf    ("printf7     :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 1.1,1.1,1.1,1.1,1.1),
		      ft_printf ("ft_printf7  :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
			//8
			x(printf    ("printf8     :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n", 1.1,1.1,1.1,1.1,1.1),
		      ft_printf ("ft_printf8  :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));
			//9
			x(printf    ("printf9     :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 1.1,1.1,1.1,1.1,1.1),
		      ft_printf ("ft_printf9  :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 1.1,1.1,1.1,1.1,1.1));

					ft_printf("\n{magenta}▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▃▅▇█▓▒░FLOAT░▒▓█▇▅▃▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂{eoc}\n\n");
				//1
				x(printf    ("printf1     :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n", 999.999,999.999,999.999,999.999,999.999),
			      ft_printf ("ft_printf1  :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
				//2
				x(printf    ("printf2     :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 999.999,999.999,999.999,999.999,999.999),
			      ft_printf ("ft_printf2  :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
				//3
				x(printf    ("printf3     :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n", 999.999,999.999,999.999,999.999,999.999),
			      ft_printf ("ft_printf3  :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
				//4
				x(printf    ("printf4     :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 999.999,999.999,999.999,999.999,999.999),
			      ft_printf ("ft_printf4  :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
				//5
				x(printf    ("printf5     :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n", 999.999,999.999,999.999,999.999,999.999),
			      ft_printf ("ft_printf5  :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
				//6
				x(printf    ("printf6     :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n", 999.999,999.999,999.999,999.999,999.999),
			      ft_printf ("ft_printf6  :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
				//7
				x(printf    ("printf7     :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 999.999,999.999,999.999,999.999,999.999),
			      ft_printf ("ft_printf7  :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
				//8
				x(printf    ("printf8     :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n", 999.999,999.999,999.999,999.999,999.999),
			      ft_printf ("ft_printf8  :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
				//9
				x(printf    ("printf9     :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.999,999.999,999.999,999.999,999.999),
			      ft_printf ("ft_printf9  :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.999,999.999,999.999,999.999,999.999));
				//9.0
				x(printf    ("printf9.0   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.0,999.0,999.0,999.0,999.0),
			      ft_printf ("ft_printf9.0:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.0,999.0,999.0,999.0,999.0));
				//9.1
				x(printf    ("printf9.1   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.1,999.1,999.1,999.1,999.1),
			      ft_printf ("ft_printf9.1:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.1,999.1,999.1,999.1,999.1));
				//9.2
				x(printf    ("printf9.2   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.2,999.2,999.2,999.2,999.2),
			      ft_printf ("ft_printf9.2:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.2,999.2,999.2,999.2,999.2));
				//9.3
				x(printf    ("printf9.3   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.3,999.3,999.3,999.3,999.3),
			      ft_printf ("ft_printf9.3:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.3,999.3,999.3,999.3,999.3));
				//9.4
				x(printf    ("printf9.4   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.4,999.4,999.4,999.4,999.4),
			      ft_printf ("ft_printf9.4:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.4,999.4,999.4,999.4,999.4));
				//9.5
				x(printf    ("printf9.5   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.5,999.5,999.5,999.5,999.5),
			      ft_printf ("ft_printf9.5:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.5,999.5,999.5,999.5,999.5));
				//9.6
				x(printf    ("printf9.6   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.6,999.6,999.6,999.6,999.6),
			      ft_printf ("ft_printf9.6:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.6,999.6,999.6,999.6,999.6));
				//9.7
				x(printf    ("printf9.7   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.7,999.7,999.7,999.7,999.7),
			      ft_printf ("ft_printf9.7:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.7,999.7,999.7,999.7,999.7));
				//9.8
				x(printf    ("printf9.8   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.8,999.8,999.8,999.8,999.8),
			      ft_printf ("ft_printf9.8:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.8,999.8,999.8,999.8,999.8));
				//9.9
				x(printf    ("printf9.9   :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.9,999.9,999.9,999.9,999.9),
			      ft_printf ("ft_printf9.9:|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.9,999.9,999.9,999.9,999.9));
				//9.
				x(printf    ("printf9.    :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.,999.,999.,999.,999.),
			    ft_printf   ("ft_printf9. :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n\n", 999.,999.,999.,999.,999.));
	/// pointeur adress %p \\\
*/
/*
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
	*/
	return(0);

}
