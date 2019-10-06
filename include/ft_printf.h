#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include "../libft/libft.h"


typedef	struct	s_printf
{
	char			*format;
	va_list			va_lst;
	va_list			va;
	va_list			va_copy;
	int				return_value;


	int				unused;
}					t_printf;

typedef	struct	s_option
{
	char		conversion;
	int			flag_plus;
	int			flag_moins;
	int			flag_space;
	int			flag_zero;
	int			flag_sharp;
	int			width;
	int			precision;
	int			mod_h;
	int			mod_l;
	int			mod_L;

}					t_option;

int			ft_printf(const char *format, ...);


/*
** parse_option.c
*/
void		parse_options(t_printf *env, t_option *options);

/*
** print_conversions
*/
int			print_conversions(t_printf *env, t_option *options);

/*
** handle_int.c
*/
int			print_int(int nb);
int			handle_int(t_printf *env);
int			handle_string(t_printf *env);


#endif
