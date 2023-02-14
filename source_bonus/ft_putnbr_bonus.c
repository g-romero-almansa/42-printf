/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:20:55 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/13 11:49:08 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_putnbr_bonus(int x, t_flag *f)
{
	long long	num;

	num = x;
	if (num < 0)
	{
		num *= -1;
		ft_putchar_bonus('-', f);
		f->flag_p = 0;
	}
	else if (f->flag_p == 1)
	{
		f->flag_p = 0;
		ft_putchar_bonus('+', f);
	}
	if (f->flag_es == 1)
	{
		f->flag_es = 0;
		ft_putchar_bonus(' ', f);
	}
	if (f->flag_z == 1)
	{
		f->flag_z = 0;
		ft_zeroprint_bonus(x, f, 0);
	}
	if (num >= 10)
		ft_putnbr_bonus(num / 10, f);
	ft_putchar_bonus((num % 10) + '0', f);
}
