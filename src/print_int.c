/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:23:22 by hde-ghel          #+#    #+#             */
/*   Updated: 2019/10/23 19:23:27 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		print_int(int nb)
{
	ft_putnbr(nb);
	return (0);
}

int		handle_int(t_printf *env)
{
	int		nb;

	nb = va_arg(env->va, int);
	print_int(nb);
	return(0);
}
