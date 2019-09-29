#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include "../libft/libft.h"


typedef struct s_printf
{
	va_list			va_lst;
	va_list			va_copy;
	char			conversion;
}					t_printf;

#endif
