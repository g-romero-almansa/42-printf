/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:03:03 by gromero-          #+#    #+#             */
/*   Updated: 2023/02/02 11:13:14 by gromero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf_bonus.h"

void	ft_putvoid_bonus(unsigned long long p, t_flag *f)
{
	if (p >= 16)
		ft_putvoid_bonus(p / 16, f);
	ft_putchar_bonus("0123456789abcdef"[p % 16], f);
}
