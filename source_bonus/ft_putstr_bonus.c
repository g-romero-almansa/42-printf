/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:54:36 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/13 10:37:45 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_putstr_bonus(char *s, t_flag *f)
{
	int		i;

	i = -1;
	while (s[++i])
		write (1, &s[i], 1);
	if (f->flag_m == 1)
	{
		if (i < f->atoi)
		{
			while (i < f->atoi)
			{	
				write (1, " ", 1);
				i++;
			}
		}
	}
	f->res += i;
}
