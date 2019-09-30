#include "../include/ft_printf.h"


/*
 *fill env struc (flags, option etc)
int		parse_argument(t_printf *env, char **format)
{
			
	return (0);
}
*/

int		print_int(int nb)
{
	ft_putnbr(nb);
	return (0);
}

int		handle_int(t_printf *env, char **format)
{
	int		nb;

	(*format)++; //passer l'option
	nb = va_arg(env->va, int);
	print_int(nb);
	return (0);
}

int		handle_string(t_printf *env, char **format)
{
	char	*str;

	(*format)++;
	str = va_arg(env->va, char *);
	ft_putstr(str);
	return (0);
}
//dispatch arguments
int		dispatch_args(t_printf *env, char **format)
{
		(*format)++; //passer le %
		//parse_flags(env, format); //check les flagss et autres (voir ordre de check)
		if (**format == 'd' || **format == 'i')
			handle_int(env, format);
		else if (**format == 's')
			handle_string(env, format);
	return (0);
}

// print jusqu au prochain %
int		print_chars(char **format)
{
	char	*str_2;

	str_2 = *format;
	while(**format && **format != '%')
		(*format)++;
	write (1, str_2, *format - str_2);
	return(*format - str_2);
}

int		browse_string(char *format, t_printf *env)
{
	while(*format)
	{
		if (*format != '%')
			env->return_value += print_chars(&format);
		else
			env->return_value += dispatch_args(env, &format);
	}
	return (0);
}

int		ft_printf(const char *format, ...)
{
	t_printf	env;

	va_start(env.va, format);
	
	if (format == NULL)
		ft_putstr("argument vide");

	browse_string((char *)format, &env);
	va_end(env.va);
	return(env.return_value);
}
