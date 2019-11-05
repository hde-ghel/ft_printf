#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include "../libft/libft.h"
//stdint for uintmax on linux
#include <stdint.h>


typedef	struct	s_printf
{
	char			*format;
	va_list			va_lst;
	va_list			va;
	va_list			va_copy;
	int				return_value;

//delete
	int				unused;
}					t_printf;

typedef	struct	s_option
{
	int			arg_length;
	char		conversion;
	int			flag_plus;
	int			flag_left;
	int			flag_space;
	int			flag_zero;
	int			flag_sharp;
	int			width;
	int			precision;
	int			mod_h;
	int			mod_l;
	int			mod_L;

//delete
	int			unused;
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
** print_int.c
*/

int			print_int(int nb);
int			handle_int(t_printf *env);

/*
** print_c_s_p.c
*/
void		print_char(t_printf *env, t_option *options);
void		print_string(t_printf *env, t_option *options);
int			print_p(t_printf *env, t_option *options);

/*
** tools.c
*/
char	*unitoa(uintmax_t nb, char *base_char, int base);
int		padding(t_option *option, int len, char c);
void	putstr_len(char *str, t_option *options, int len);

/*
**print_percent.c
*/
int			print_percent(t_printf *env, t_option *options);
#endif
