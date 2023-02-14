/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minusflag_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:57:44 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/13 10:38:18 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_minusprint_bonus(int num, t_flag *f, int flag)
{
	int	i;

	i = 0;
	if (flag == 0)
	{
		while (num)
		{
			num /= 10;
			i++;
		}
	}
	else
	{
		while (num)
		{
			num /= 16;
			i++;
		}
	}
	f->atoi -= i;
	if (f->atoi > 0)
		while (--f->atoi >= 0)
			write (1, " ", 1);
}
