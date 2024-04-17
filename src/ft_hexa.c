/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megadiou <megadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:10:57 by megadiou          #+#    #+#             */
/*   Updated: 2023/11/20 15:40:30 by megadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n)
{
	char	c;

	c = '0';
	if (n > 9)
	{
		ft_putnbr_unsigned(n / 10);
		ft_putnbr_unsigned(n % 10);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
}

void	ft_putnbr_base16(unsigned int num, int upLow)
{
	int	tmp;

	tmp = 0;
	if (num)
	{
		tmp = num % 16;
		ft_putnbr_base16(num / 16, upLow);
		if (tmp > 9)
			ft_putchar_fd(tmp + upLow, 1);
		else
			ft_putchar_fd(tmp + 48, 1);
	}
}

void	ft_putptr(unsigned long long num)
{
	unsigned long long	tmp;

	tmp = 0;
	if (num)
	{
		tmp = num % 16;
		ft_putptr(num / 16);
		if (tmp > 9)
			ft_putchar_fd(tmp + 87, 1);
		else
			ft_putchar_fd(tmp + 48, 1);
	}
}
