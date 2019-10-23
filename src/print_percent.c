/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:23:32 by hde-ghel          #+#    #+#             */
/*   Updated: 2019/10/23 19:23:33 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		print_percent(t_printf *env, t_option *options)
{
	if (*env->format || *env->format == ' ')
		return (0);
	if (options->unused)
		return(0);
	return (0);
}
