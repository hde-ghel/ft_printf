#include "../../include/ft_printf.h"

int main(void)
{
	char *test;
	int a = 0;

	test = ft_strdup("hello");


 a = ft_printf("%6.4s %-15c %% %llu %+0d %dtest%#o %00d %+06d %d % 6d %f %.3lf %.3Lf %#x %#X \n",
 		"hello", 'a', (unsigned long long)17, 188, 18, 19, 199, 20, 31, 31,
 		 15.5, 12345.6789, (long double)98765.4321, 15, 15);

    printf("%d\n",a);

    a = printf("%6.4s %-15c %% %llu %+0d %dtest%#o %00d %+06d %d % 6d %f %.3lf %.3Lf %#x %#X \n",
    	"hello", 'a', (unsigned long long)17, 188, 18, 19, 199, 20, 31, 31,
    	 15.5, 12345.6789, (long double)98765.4321, 15, 15);
    printf("%d\n",a);


    ft_printf("%i test %i testo %d %s\n",17, 1999, 28, "dsds");
       printf("%i test %i testo %d %s\n",17, 1999, 28, "dsds");


	  a = printf("%p\n", &test);
	a = ft_printf("%p\n", &test);
	  a = printf("%p\n", test);
	a = ft_printf("%p\n", test);

	  printf("%6.4u %#10.12x %10.12u %0o %0x %#010X %p \n", 18, 18, 18, 19, 36, 36, test);
   ft_printf("%6.4u %#10.12x %10.12u %0o %0x %#010X %p \n", 18, 18, 18, 19, 36, 36, test);

	printf("%######ll.12d\n", 17);
	ft_printf("%######ll.12d\n", 17);

	printf("%%\n");
	ft_printf("%%\n");
	printf("%5%\n");
	ft_printf("%5%\n");

	printf("%p\n", 0);
	ft_printf("%p\n", 0);

	ft_printf("hello \x1b[36m %d \x1b[0m test \n", 127);

	ft_printf("%#b\n", 64);

	ft_printf("@moulitest: %c hello\n", 0);
	printf("@moulitest: %c hello\n", 0);
	printf("%2c\n", 0);
	ft_printf("%2c\n", 0);
	printf("null %c and text\n", 0);
	ft_printf("null %c and text\n", 0);
	printf("%-5c\n", 0);
	ft_printf("%-5c\n", 0);
	printf("% c\n", 0);
	ft_printf("% c\n", 0);

	printf("%s %s\n", NULL, "string");
	ft_printf("%s %s\n", NULL, "string");


	printf("%lu\n", -42);
	ft_printf("%lu\n", -42);

	printf("% u\n", 4294967295);
	ft_printf("% u\n", 4294967295);

	printf("% u\n", 4294967295);
	ft_printf("% u\n", 4294967295);

	printf("% u\n", 4294967295);
	ft_printf("% u\n", 4294967295);

	printf("% u\n", 4294967295);
	ft_printf("% u\n", 4294967295);

	ft_printf("1 @moulitest: %.d %.0d\n", 0, 0);
	printf("2 @moulitest: %.d %.0d\n", 0, 0);
	ft_printf("3 @moulitest: %5.d %5.0d\n", 0, 0);
	printf("4 @moulitest: %5.d %5.0d\n", 0, 0);
	ft_printf("5 @moulitest: %#.x %#.0x\n", 0, 0);
	printf("6 @moulitest: %#.x %#.0x\n", 0, 0);



	ft_printf("%zd\n", 4294967295);
	ft_printf("%zd\n", 4294967295);
	printf("%zd\n", 4294967295);
	ft_printf("%zd\n", 4294967296);
	printf("%zd\n", 4294967296);
	ft_printf("%lld\n", -9223372036854775808);
	printf("%lld\n", -9223372036854775808);
	ft_printf("%jd\n", -9223372036854775808);
	printf("%jd\n", -9223372036854775808);

	ft_printf("%zd\n", (ssize_t)-1);
	printf("%zd\n", (ssize_t)-1);

	ft_printf("%#-46.54o\n", -359465372);
	printf("%#-46.54o\n", -359465372);

	ft_printf("%2.2s\n", "(null)");
	printf("%2.2s\n", "(null)");


	a = printf("%p\n", 0);
	printf("%d\n", a);
	a = ft_printf("%p\n", 0);
	printf("%d\n", a);

	a = printf("%.0p, %.p\n", 0, 0);
	printf("%d\n", a);
	a = ft_printf("%.0p, %.p\n", 0, 0);
	printf("%d\n", a);

	a = printf("%");
	printf("%d\n", a);
	a = ft_printf("%");
	printf("%d\n", a);

	a = printf("% Zoooo");
	printf("%d\n", a);
	a = ft_printf("% Zoooo");
	printf("%d\n", a);

	a = ft_printf("%\n");
	printf("%d\n", a);




	printf("%-10s is a string\n", "this");
	ft_printf("%-10s is a string\n", "this");
	printf("%-.2s is a string\n", "this");
	ft_printf("%-.2s is a string\n", "this");
	printf("%-5.2s is a string\n", "this");
	ft_printf("%-5.2s is a string\n", "this");
	printf("@moulitest: %s\n", NULL);
	ft_printf("@moulitest: %s\n", NULL);
	printf("%s %s\n", NULL, "string");
	ft_printf("%s %s\n", NULL, "string");


	printf("%10s is a string\n", "");
	ft_printf("%10s is a string\n", "");
	printf("%.2s is a string\n", "");
	ft_printf("%.2s is a string\n", "");
	printf("%5.2s is a string\n", "");
	ft_printf("%5.2s is a string\n", "");
	printf("%-10s is a string\n", "");
	ft_printf("%-10s is a string\n", "");
	printf("%-.2s is a string\n", "");
	ft_printf("%-.2s is a string\n", "");
	printf("%-5.2s is a string\n", "");
	ft_printf("%-5.2s is a string\n", "");

	printf("%-010s is a string\n", "this");
	ft_printf("%-010s is a string\n", "this");

	printf("%010s is a string\n", "this");
	ft_printf("%010s is a string\n", "this");

	printf("%-10s is a string\n", "this");
	ft_printf("%-10s is a string\n", "this");

	printf("%10s is a string\n", "this");
	ft_printf("%10s is a string\n", "this");


	printf("%4.s-\n", "42");
	ft_printf("%4.s-\n", "42");

	printf("{%05.s}-\n", 0);
	ft_printf("{%05.s}-\n", 0);

	printf("{%05s}-\n", "abc");
	ft_printf("{%05s}-\n", "abc");



	a = printf("{%03c}-\n", 0);
	printf("%d\n", a);
	a = ft_printf("{%03c}-\n", 0);
	printf("%d\n", a);

	a = printf("{%05c}-\n", 0);
	printf("%d\n", a);
	a = ft_printf("{%05c}-\n", 0);
	printf("%d\n", a);

	a = printf("{%03c}-\n", 'C');
	printf("%d\n", a);
	a = ft_printf("{%03c}-\n", 'C');
	printf("%d\n", a);

	a = printf("{%05c}-\n", 'd');
	printf("%d\n", a);
	a = ft_printf("{%05c}-\n", 'd');
	printf("%d\n", a);

	a = printf("{%05.%}-\n", 0);
	printf("%d\n", a);
	a = ft_printf("{%05.%}-\n", 0);
	printf("%d\n", a);

	printf("@moulitest: %c hello\n", 0);
	ft_printf("@moulitest: %c hello\n", 0);




	// a = printf("%*d", 5, 42);
	// printf("%d\n", a);
	// a = ft_printf("%*d", 5, 42);
	// printf("%d\n", a);

	// a = printf("%*.*d", 0, 3, 0);
	// printf("%d\n", a);
	// a = ft_printf("%*.*d", 0, 3, 0);
	// printf("%d\n", a);


	// a = printf(printf("{%3*d}", 0, 0));
	// printf("%d\n", a);
	// a = ft_printf(printf("{%3*d}", 0, 0));
	// printf("%d\n", a);




	return 0;
}
