/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 03:32:12 by tbouzalm          #+#    #+#             */
/*   Updated: 2021/12/18 01:33:03 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexax(unsigned int x)
{
	int	count;

	count = 0;
	if (x >= 16)
	{
		count += ft_hexax(x / 16);
		count += ft_hexax(x % 16);
	}
	else if (x > 9)
	{
		count += ft_putchar(x + 55);
	}
	else
		count += ft_putchar(x + '0');
	return (count);
}
