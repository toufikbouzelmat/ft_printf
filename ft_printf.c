/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 21:24:16 by tbouzalm          #+#    #+#             */
/*   Updated: 2021/12/19 21:41:05 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_checkformat(va_list ap, char s)
{
	int	i;

	i = 0;
	if (s == 's')
		i += ft_putstr(va_arg(ap, const char *));
	else if (s == '%')
		i += ft_putchar('%');
	else if (s == 'd' || s == 'i')
		i += ft_putnbr(va_arg(ap, int));
	else if (s == 'c')
		i += ft_putchar(va_arg(ap, int));
	else if (s == 'u')
		i += ft_unsigned(va_arg(ap, unsigned int));
	else if (s == 'p')
	{
		write(1, "0x", 2);
		return (2 + ft_pointeur(va_arg(ap, unsigned long)));
	}
	else if (s == 'x')
		i += ft_hexa(va_arg(ap, unsigned int));
	else if (s == 'X')
		i += ft_hexax(va_arg(ap, unsigned int));
	return (i);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		len;
	va_list	ap;

	i = 0;
	len = 0;
	va_start(ap, s);
	while (s[i] != '\0')
	{
		if (s[i] != '%')
		{
			len += ft_putchar(s[i]);
		}
		else if (s[i] == '%' && s[i + 1] != '\0')
		{
			len += ft_checkformat(ap, s[i + 1]);
			i++;
		}
		i++;
	}
	va_end(ap);
	return (len);
}
