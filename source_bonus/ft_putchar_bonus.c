/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:46:49 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/13 10:41:23 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_putchar_bonus(int c, t_flag *f)
{
	write (1, &c, 1);
	f->res += 1;
	if (f->flag_m == 1)
	{
		f->flag_m = 0;
		f->res += f->atoi - 1;
		while (--f->atoi)
			write (1, " ", 1);
	}
}
