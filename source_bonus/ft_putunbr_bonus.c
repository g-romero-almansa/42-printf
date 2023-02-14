/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:35:47 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/08 11:47:29 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_putunbr_bonus(unsigned int x, t_flag *f)
{
	if (f->flag_z == 1)
	{
		f->flag_z = 0;
		ft_zeroprint_bonus(x, f, 0);
	}
	if (x >= 10)
		ft_putunbr_bonus(x / 10, f);
	ft_putchar_bonus((x % 10) + '0', f);
}
