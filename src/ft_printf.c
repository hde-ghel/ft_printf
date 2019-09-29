#include "../include/ft_printf.h"

int		handle_conv(t_printf *env)
{
	env->unused = 0;
	if (env->unused == 0)
	ft_putstr(" |ya un arg ici| ");
	return (0);
}

int		putstr_len(char **str)
{
	char	*str_2;

	str_2 = *str;
	while(**str && **str != '%')
		(*str)++;
	write (1, str_2, *str - str_2);
	return(*str - str_2);
}

int		browse_string(char *str, t_printf *env)
{
	while(*str)
	{
		if (*str != '%')
			env->return_value += putstr_len(&str);
		else
			env->return_value += handle_conv(env);
	}
	return (0);
}

int		ft_printf(const char *format, ...)
{
	t_printf	env;
	//va_list	va;


	//va_start(va, format);
	if (format == NULL)
		ft_putstr("argument vide");

	browse_string((char *)format, &env);
	//va_end(va);
	return(env.return_value);
}
