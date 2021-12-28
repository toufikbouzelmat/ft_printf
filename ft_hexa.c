/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 03:26:07 by tbouzalm          #+#    #+#             */
/*   Updated: 2021/12/18 01:26:52 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned int x)
{
	int	count;

	count = 0;
	if (x >= 16)
	{
		count += ft_hexa(x / 16);
		count += ft_hexa(x % 16);
	}
	else if (x > 9)
	{
		count += ft_putchar(x + 87);
	}
	else
		count += ft_putchar(x + '0');
	return (count);
}
