#include "../nboulif/includes/ft_printf.h"
#include <stdio.h>

int main()
{
	int a;


	// OCTAL\\

	printf("OCTAL\n");
	printf("\n");
	//1
	printf ("printf1     :|%5o|%5.3o|%5.1o|%5.0o|%5.o|\n", 0,0,0,0,0);
	ft_printf ("ft_printf1  :|%5o|%5.3o|%5.1o|%5.0o|%5.o|\n\n", 0,0,0,0,0);
	//2
	printf ("printf2     :|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n", 0,0,0,0,0);
	ft_printf ("ft_printf2  :|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n\n", 0,0,0,0,0);
	//3
	printf ("printf3     :|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n", 0,0,0,0,0);
	ft_printf ("ft_printf3  :|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n\n", 0,0,0,0,0);
	//4
	printf ("printf4     :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n", 0,0,0,0,0);
	ft_printf ("ft_printf4  :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n\n", 0,0,0,0,0);
	//5
	printf ("printf5     :|%-0#5o|%-0#5.3o|%-0#5.1o|%-0#5.0o|%-0#5.o|\n", 0,0,0,0,0);
	ft_printf ("ft_printf5  :|%-0#5o|%-0#5.3o|%-0#5.1o|%-0#5.0o|%-0#5.o|\n\n", 0,0,0,0,0);

	printf ("printf6     :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n", 100000,100000,100000,100000,100000);
	ft_printf ("ft_printf6  :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n\n", 100000,100000,100000,100000,100000);

	printf ("printf7     :|%-0#5o|%-0#5.3o|%-0#5.1o|%-0#5.0o|%-0#5.o|\n", 100000,100000,100000,100000,100000);
	ft_printf ("ft_printf7  :|%-0#5o|%-0#5.3o|%-0#5.1o|%-0#5.0o|%-0#5.o|\n\n", 100000,100000,100000,100000,100000);

	printf("printf8     :|%#-16.24o\n", -359465372);
	ft_printf("ft_printf8  :|%#-16.24o\n\n", -359465372);

	printf("printf9     :|%#0-16.24o\n", -359465372);
	ft_printf("ft_printf9  :|%#0-16.24o\n\n", -359465372);

	a = printf("printf10     :|%#16.o\n", -359465372);
    printf("%d\n",a);
	a = ft_printf("ft_printf10  :|%#16.o\n", -359465372);
    printf("%d\n\n",a);

	a = printf("printf11     :|%#016.24o\n", -359465372);
    printf("%d\n",a);
	a = ft_printf("ft_printf11  :|%#016.24o\n", -359465372);
    printf("%d\n\n",a);

	a = printf("printf12     :|%#016.24o\n", 359465372);
    printf("%d\n",a);
	a = ft_printf("ft_printf12  :|%#016.24o\n", 359465372);
    printf("%d\n\n",a);

	a = printf("printf13     :|!%-#.2hho!\n", 2144921759);
    printf("%d\n",a);
	a = ft_printf("ft_printf13  :|!%-#.2hho!\n", 2144921759);
    printf("%d\n\n",a);

	a = printf("printf14     :|!%0#.19o!\n", 1319008552);
    printf("%d\n",a);
	a = ft_printf("ft_printf14  :|!%0#.19o!\n", 1319008552);
    printf("%d\n\n",a);

	a = printf("printf15     :|!%#0.12o!\n", 1319008552);
    printf("%d\n",a);
	a = ft_printf("ft_printf15  :|!%#0.1o!\n", 1319008552);
    printf("%d\n\n",a);

	a = printf("printf15     :|@moulitest: %.o %.0o-\n", 0, 0);
    printf("%d\n",a);
	a = ft_printf("ft_printf15  :|@moulitest: %.o %.0o-\n", 0, 0);
    printf("%d\n\n",a);


	a = printf("%#.o, %#.0o\n", 0, 0);
	printf("%d\n", a);
	a = ft_printf("%#.o, %#.0o\n", 0, 0);
	printf("%d\n", a);


    //HEXA\\

	printf("\n");
	printf("\n");
	printf("HEXA\n");
	printf("\n");
	//1
	printf("ref : '%010x'\n", 542);
	ft_printf("test: '%010x'\n", 542);
	printf("ref : '%#010x'\n", 542);
	ft_printf("test: '%#010x'\n", 542);
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

	printf ("printf6     :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n", 100000,100000,100000,100000,100000);
	ft_printf ("ft_printf6  :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n\n", 100000,100000,100000,100000,100000);

	printf ("printf7     :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n", 100000,100000,100000,100000,100000);
	ft_printf ("ft_printf7  :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n\n", 100000,100000,100000,100000,100000);



	a = printf("%.x, %.0x", 0, 0);
	printf("%d\n", a);
	a = ft_printf("%.x, %.0x", 0, 0);
	printf("%d\n", a);

	// // POINTER\\

	printf("\n");
	printf("\n");
	printf("POINTER\n");
	printf("\n");
	//1
	a = printf ("printf1     :|%7p|%7.3p|%7.1p|%7.0p|%7.p|\n", 0,0,0,0,0);
	printf("%d\n", a);
	a =ft_printf ("ft_printf1  :|%7p|%7.3p|%7.1p|%7.0p|%7.p|\n", 0,0,0,0,0);
	printf("%d\n", a);
	//2
	printf ("printf2     :|%#7p|%#7.3p|%#7.1p|%#7.0p|%#7.p|\n", 0,0,0,0,0);
	ft_printf ("ft_printf2  :|%#7p|%#7.3p|%#7.1p|%#7.0p|%#7.p|\n\n", 0,0,0,0,0);
	//3
	printf ("printf3     :|%-#7p|%-#7.3p|%-#7.1p|%-#7.0p|%-#7.p|\n", 0,0,0,0,0);
	ft_printf ("ft_printf3  :|%-#7p|%-#7.3p|%-#7.1p|%-#7.0p|%-#7.p|\n\n", 0,0,0,0,0);
	//4
	printf ("printf4     :|%0#7p|%0#7.3p|%0#7.1p|%0#7.0p|%0#7.p|\n", 0,0,0,0,0);
	ft_printf ("ft_printf4  :|%0#7p|%0#7.3p|%0#7.1p|%0#7.0p|%0#7.p|\n\n", 0,0,0,0,0);
	//5
	printf ("printf5     :|%-0#7p|%-0#7.3p|%-0#7.1p|%-0#7.0p|%-0#7.p|\n", 0,0,0,0,0);
	ft_printf ("ft_printf5  :|%-0#7p|%-0#7.3p|%-0#7.1p|%-0#7.0p|%-0#7.p|\n\n", 0,0,0,0,0);


	printf ("printf6     :|%0#7p|%0#7.3p|%0#7.1p|%0#7.0p|%0#7.p|\n", 100000,100000,100000,100000,100000);
	ft_printf ("ft_printf6  :|%0#7p|%0#7.3p|%0#7.1p|%0#7.0p|%0#7.p|\n\n", 100000,100000,100000,100000,100000);

	printf ("printf7     :|%-0#7p|%-0#7.3p|%-0#7.1p|%-0#7.0p|%-0#7.p|\n", 100000,100000,100000,100000,100000);
	ft_printf ("ft_printf7  :|%-0#7p|%-0#7.3p|%-0#7.1p|%-0#7.0p|%-0#7.p|\n\n", 100000,100000,100000,100000,100000);


	a = printf("printf7     :|%p\n", 0);
	printf("%d\n", a);

	a = ft_printf("ft_printf7  :|%p\n", 0);
	printf("%d\n", a);


	a = printf("printf7     :|%.0p, %.p\n", 0, 0);
	printf("%d\n", a);
	a = ft_printf("ft_printf7  :|%.0p, %.p\n", 0, 0);
	printf("%d\n", a);

	a = printf("-%.5p\n", 0);
	printf("%d\n", a);
	a = ft_printf("-%.5p\n", 0);
	printf("%d\n", a);


	//UNSIGNED\\


	printf("\n");
	printf("\n");
	printf("UNSIGNED\n");
	printf("\n");
	//unsigned\\
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
	ft_printf("ft_printf7   :|% 03u|\n", 0);

	printf ("printf8     :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n", 100000,100000,100000,100000,100000);
	ft_printf ("ft_printf8  :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n\n", 100000,100000,100000,100000,100000);
	//6
	printf ("printf9     :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n", 100000,100000,100000,100000,100000);
	ft_printf ("ft_printf9  :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n\n", 100000,100000,100000,100000,100000);

	printf("printf10    :| %u +%u\n", 1, 2);
	ft_printf("ft_printf10 :| %u +%u\n", 1, 2);

	a = printf("% u-\n", 9999);
	printf("%d\n", a);
	a = ft_printf("% u-\n", 9999);
	printf("%d\n", a);


	a = printf("%.u, %.0u-\n", 0, 0);
	printf("%d\n", a);
	a = ft_printf("%.u, %.0u-\n", 0, 0);
	printf("%d\n", a);


	a = printf("% u|%+u\n", 42, 42);
	printf("%d\n", a);
	a = ft_printf("% u|%+u\n", 42, 42);
	printf("%d\n", a);

	a = printf("%.4u-\n", 42);
	printf("%d\n", a);
	a = ft_printf("%.4u-\n", 42);
	printf("%d\n", a);


	//DECI\\

	printf("\n");
	printf("\n");
	printf("DECIMAL\n");
	printf("\n");
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
	ft_printf("ft_printf7   :|% 03d|\n\n", 0);

	printf ("printf8     :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", 19874, 19874, 19874, 19874, 19874);
	ft_printf ("ft_printf8  :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n\n", 19874, 19874, 19874, 19874, 19874);

	printf ("printf9     :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 19874, 19874, 19874, 19874, 19874);
	ft_printf ("ft_printf9  :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n\n", 19874, 19874, 19874, 19874, 19874);

	printf ("printf10    :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", 35, 35, 35, 35, 35);
	ft_printf ("ft_printf10 :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n\n", 35, 35, 35, 35, 35);

	printf ("printf11    :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 35, 35, 35, 35, 35);
	ft_printf ("ft_printf11 :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n\n", 35, 35, 35, 35, 35);

	printf ("printf12    :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", -20, -20, -20, -20, -20);
	ft_printf ("ft_printf12 :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n\n", -20, -20, -20, -20, -20);

	printf ("printf13    :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", -20, -20, -20, -20, -20);
	ft_printf ("ft_printf13 :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n\n", -20, -20, -20, -20, -20);

	printf("printf14    :| %d %d\n", 1, -2);
	ft_printf("ft_printf14 :| %d %d\n", 1, -2);



	//FLOAT\\

	printf("\n");
	printf("\n");
	printf("FLOAT\n");
	printf("\n");
	//1
	printf ("printf1     :|%+ 5f|%+ 5.3f|%+ 5.1f|%+ 5.0f|%+ 5.f|\n", 0,0,0,0,0);
	ft_printf ("ft_printf1  :|%+ 5f|%+ 5.3f|%+ 5.1f|%+ 5.0f|%+ 5.f|\n\n", 0,0,0,0,0);
	//2
	printf ("printf2     :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 0,0,0,0,0);
	ft_printf ("ft_printf2  :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n\n", 0,0,0,0,0);
	//3
	printf ("printf3     :|%-+5f|%-+5.3f|%-+5.1f|%-+5.0f|%-+5.f|\n", 0,0,0,0,0);
	ft_printf ("ft_printf3  :|%-+5f|%-+5.3f|%-+5.1f|%-+5.0f|%-+5.f|\n\n", 0,0,0,0,0);
	//4
	printf ("printf4     :|%0+5f|%0+5.3f|%0+5.1f|%0+5.0f|%0+5.f|\n", 0,0,0,0,0);
	ft_printf ("ft_printf4  :|%0+5f|%0+5.3f|%0+5.1f|%0+5.0f|%0+5.f|\n\n", 0,0,0,0,0);
	//5
	printf ("printf5     :|%-+05f|%-+05.3f|%-+05.1f|%-+05.0f|%-+05.f|\n", 0,0,0,0,0);
	ft_printf ("ft_printf5  :|%-+05f|%-+05.3f|%-+05.1f|%-+05.0f|%-+05.f|\n\n", 0,0,0,0,0);
	//6
	printf ("printf6     :|% 05f|% 05.3f|% 05.1f|% 05.0f|% 05.f|\n", 0,0,0,0,0);
	ft_printf ("ft_printf6  :|% 05f|% 05.3f|% 05.1f|% 05.0f|% 05.f|\n\n", 0,0,0,0,0);
	//7
	printf("printf7      :|% 03f|\n", 0);
	ft_printf("ft_printf7   :|% 03f|\n\n", 0);

	printf ("printf8     :|%-+05f|%-+05.3f|%-+05.1f|%-+05.0f|%-+05.f|\n", 19874.17, 19874.17, 19874.17, 19874.17, 19874.17);
	ft_printf ("ft_printf8  :|%-+05f|%-+05.3f|%-+05.1f|%-+05.0f|%-+05.f|\n\n", 19874.17, 19874.17, 19874.17, 19874.17, 19874.17);

	printf ("printf9     :|% 05f|% 05.3f|% 05.1f|% 05.0f|% 05.f|\n", 19874.17, 19874.17, 19874.17, 19874.17, 19874.17);
	ft_printf ("ft_printf9  :|% 05f|% 05.3f|% 05.1f|% 05.0f|% 05.f|\n\n", 19874.17, 19874.17, 19874.17, 19874.17, 19874.17);

	printf ("printf10    :|%-+05f|%-+05.3f|%-+05.1f|%-+05.0f|%-+05.f|\n", 35.1234567, 35.1234567, 35.1234567, 35.1234567, 35.1234567);
	ft_printf ("ft_printf10 :|%-+05f|%-+05.3f|%-+05.1f|%-+05.0f|%-+05.f|\n\n", 35.1234567, 35.1234567, 35.1234567, 35.1234567, 35.1234567);

	printf ("printf11    :|% 05f|% 05.3f|% 05.1f|% 05.0f|% 05.f|\n", 35.1234567, 35.1234567, 35.1234567, 35.1234567, 35.1234567);
	ft_printf ("ft_printf11 :|% 05f|% 05.3f|% 05.1f|% 05.0f|% 05.f|\n\n", 35.1234567, 35.1234567, 35.1234567, 35.1234567, 35.1234567);

	printf ("printf12    :|%-+05f|%-+05.3f|%-+05.1f|%-+05.0f|%-+05.f|\n", -20.12345, -20.12345, -20.12345, -20.12345, -20.12345);
	ft_printf ("ft_printf12 :|%-+05f|%-+05.3f|%-+05.1f|%-+05.0f|%-+05.f|\n\n", -20.12345, -20.12345, -20.12345, -20.12345, -20.12345);

	printf ("printf13    :|% 05f|% 05.3f|% 05.1f|% 05.0f|% 05.f|\n", -20.12345, -20.12345, -20.12345, -20.12345, -20.12345);
	ft_printf ("ft_printf13 :|% 05f|% 05.3f|% 05.1f|% 05.0f|% 05.f|\n\n", -20.12345, -20.12345, -20.12345, -20.12345, -20.12345);

	printf ("printf14    :|% 5f|% 0.3f|% 5.1f|% 5.0f|% 5.f|\n", -20.12345, -20.12345, -20.12345, -20.12345, -20.12345);
	ft_printf ("ft_printf14 :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n\n", -20.12345, -20.12345, -20.12345, -20.12345, -20.12345);

	printf ("printf15    :|%5f|%0.3f|%5.1f|%5.0f|%5.f|\n", -20.12345, -20.12345, -20.12345, -20.12345, -20.12345);
	ft_printf ("ft_printf15 :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n\n", -20.12345, -20.12345, -20.12345, -20.12345, -20.12345);

	printf ("----%.9f\n", 0.42);
	ft_printf ("----%.9f\n", 0.42);
	printf ("\n\n");

	printf ("----%.10f\n", 0.42);
	ft_printf ("----%.10f\n", 0.42);
	printf ("\n\n");

	printf ("----%.16f\n", 0.42);
	ft_printf ("----%.16f\n", 0.42);
	printf ("\n\n");

	printf ("----%.17f\n", 0.42);
	ft_printf ("----%.17f\n", 0.42);
	printf ("\n\n");

	printf ("----%.18f\n", 0.42);
	ft_printf ("----%.18f\n", 0.42);
	printf ("\n\n");

	printf ("----%.50f\n", 0.42);
	ft_printf ("----%.50f\n", 0.42);
	printf ("\n\n");

	printf ("----%.60f\n", 0.42);
	ft_printf ("----%.60f\n", 0.42);
	printf ("\n\n");



	printf ("----%.9f\n", 0.17);
	ft_printf ("----%.9f\n", 0.17);
	printf ("\n\n");

	printf ("----%.10f\n", 0.17);
	ft_printf ("----%.10f\n", 0.17);
	printf ("\n\n");

	printf ("----%.16f\n", 0.17);
	ft_printf ("----%.16f\n", 0.17);
	printf ("\n\n");

	printf ("----%.17f\n", 0.17);
	ft_printf ("----%.17f\n", 0.17);
	printf ("\n\n");

	printf ("----%.18f\n", 0.17);
	ft_printf ("----%.18f\n", 0.17);
	printf ("\n\n");

	printf ("----%.50f\n", 0.17);
	ft_printf ("----%.50f\n", 0.17);
	printf ("\n\n");

	printf ("----%.60f\n", 0.17);
	ft_printf ("----%.60f\n", 0.17);
	printf ("\n\n");


	a = printf ("printf15    :|%+-.42lf\n", -9223372036854775808.000000);
	a = ft_printf ("ft_printf15 :|%+-.42lf\n", -9223372036854775808.000000);

	a = printf ("42%+42f42\n", -9223372036854775808.000000);
	a = ft_printf ("42%+42f42\n", -9223372036854775808.000000);

	a = printf ("!% .53f!\n", -9223372036854775808.000000);
	a = ft_printf ("!% .53f!\n", -9223372036854775808.000000);

	a = printf ("^.^/%-#2f^.^/\n", 1.000000);
	a = ft_printf ("^.^/%-#2f^.^/\n", 1.000000);

	a = printf ("\\!/%-#2.16f\\!/\n", (double)1.000000);
	a = ft_printf ("\\!/%-#2.16f\\!/\n", (double)1.000000);

	return (0);
}
