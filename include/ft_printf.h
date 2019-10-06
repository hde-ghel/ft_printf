#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include "../libft/libft.h"


typedef struct s_printf
{
	char			*format;
	va_list			va_lst;
	va_list			va_copy;
	char			conversion;
	int				return_value;
	va_list			va;


	int				unused;
}					t_printf;

int		ft_printf(const char *format, ...);

/*
 * handle_int.c
*/
int		print_int(int nb);
int		handle_int(t_printf *env);
int		handle_string(t_printf *env);

/*
 * parse_option.c
*/
int		parse_options(env);

#endif
