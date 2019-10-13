#include "../include/ft_printf.h"

int		dispatch_args(t_printf *env, t_option *options)
{
		env->format++; //passer le %
		parse_options(env, options); //check les flagss et autres (voir ordre de check)
		print_conversions(env, options);

	return (options->arg_length);
}

int		print_chars(t_printf *env)
{
	char	*str_2;

	str_2 = env->format;
	while(*env->format && *env->format != '%')
		env->format++;
	write (1, str_2, env->format - str_2);
	return(env->format - str_2);
}

int		browse_string(t_printf *env)
{
	t_option	options;

	ft_bzero(&options, sizeof(options));
	while(*env->format)
	{
		if (*env->format != '%')
			env->return_value += print_chars(env);
		else
			env->return_value += dispatch_args(env, &options);
		//protection a faire sur dispatch_arg changer le return
	}
	return (0);
}

int		ft_printf(const char *format, ...)
{
	t_printf	env;

	if (format == NULL) // faire les check ici si il y en a
		ft_putstr("argument vide");
	ft_bzero(&env, sizeof(env));
	va_start(env.va, format);
	env.format = (char *)format;
	browse_string(&env);
	va_end(env.va);
	return(env.return_value);
}
