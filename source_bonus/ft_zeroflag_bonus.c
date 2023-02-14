/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zeroflag_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:52:10 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/10 16:09:30 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_zeroflag_bonus(char const *s, t_flag *f)
{
	f->atoi = 0;
	++f->i;
	while (s[f->i] >= '0' && s[f->i] <= '9')
	{
		f->atoi = (f->atoi * 10) + (s[f->i] - '0');
		f->i++;
	}
}

void	ft_zeroprint_bonus(int num, t_flag *f, int flag)
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
			write (1, "0", 1);
}
