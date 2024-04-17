/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megadiou <megadiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:39:49 by megadiou          #+#    #+#             */
/*   Updated: 2023/11/17 15:33:11 by megadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(va_list args)
{
	char	c;

	c = va_arg(args, int);
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_string(va_list args)
{
	char	*str;
	int		len;

	str = va_arg(args, char *);
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	len = (int)ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (len);
}

int	ft_print_percent(void)
{
	char	c;

	c = '%';
	ft_putchar_fd(c, 1);
	return (1);
}
