/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthnbr_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:42:26 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/13 10:35:51 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_puthnbr_bonus(unsigned int x, char *s, t_flag *f)
{
	if (f->flag_h == 1 && s[15] == 'f')
	{
		f->flag_h = 0;
		ft_putstr_bonus("0x", f);
	}
	else if (f->flag_h == 1 && s[15] == 'F')
	{
		f->flag_h = 0;
		ft_putstr_bonus("0X", f);
	}
	if (f->flag_z == 1)
	{
		f->flag_z = 0;
		ft_zeroprint_bonus(x, f, 1);
	}
	if (x >= 16)
		ft_puthnbr_bonus(x / 16, s, f);
	ft_putchar_bonus(s[x % 16], f);
	if (f->flag_m == 1)
	{
		f->flag_m = 0;
		ft_minusprint_bonus(x, f, 1);
	}
}
