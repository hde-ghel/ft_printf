#include "../nboulif/includes/ft_printf.h"

int main(void)
{
	int a = 0;



	a = printf("%%");
	printf("%d\n", a);
	a = ft_printf("%%");
	printf("%d\n", a);
	
	a = printf("%aaaaa");
	printf("%d\n", a);
	a = ft_printf("%aaaaa");
	printf("%d\n", a);
	
	printf("%d\n", a);


    ft_printf("%i test %i testo %d %s\n",17, 1999, 28, "dsds");
       printf("%i test %i testo %d %s\n",17, 1999, 28, "dsds");


 a = ft_printf("%6.4s %-15c %% %llu %+0d %dtest%#o %00d %+06d %d % 6d %f %.3lf %.3Lf %#x %#X \n",
 		"hello", 'a', (unsigned long long)17, 188, 18, 19, 199, 20, 31, 31,
 		 15.5, 12345.6789, (long double)98765.4321, 15, 15);

    printf("%d\n",a);

    a = printf("%6.4s %-15c %% %llu %+0d %dtest%#o %00d %+06d %d % 6d %f %.3lf %.3Lf %#x %#X \n",
    	"hello", 'a', (unsigned long long)17, 188, 18, 19, 199, 20, 31, 31,
    	 15.5, 12345.6789, (long double)98765.4321, 15, 15);
    printf("%d\n",a);



	printf("%######ll.12d\n", 17);
	ft_printf("%######ll.12d\n", 17);


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
