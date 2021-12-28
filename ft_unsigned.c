/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 02:42:17 by tbouzalm          #+#    #+#             */
/*   Updated: 2021/12/18 01:04:38 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		i += ft_unsigned(n / 10);
		i += ft_unsigned(n % 10);
	}
	else
	{
		i += ft_putchar(n + '0');
	}
	return (i);
}
