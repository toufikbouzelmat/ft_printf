/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointeur.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 02:52:32 by tbouzalm          #+#    #+#             */
/*   Updated: 2021/12/18 01:07:07 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointeur(unsigned long p)
{
	char	*hex;
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	if (p >= 16)
	{
		i += ft_pointeur(p / 16);
		i += ft_pointeur(p % 16);
	}
	else if (p < 16)
	{
		i += write(1, &hex[p], 1);
	}
	return (i);
}
