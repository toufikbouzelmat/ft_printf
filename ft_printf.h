/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 23:12:48 by tbouzalm          #+#    #+#             */
/*   Updated: 2021/12/18 01:03:31 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putnbr(int nbr);
int	ft_pointeur(unsigned long p);
int	ft_unsigned(unsigned int n);
int	ft_hexa(unsigned int x);
int	ft_hexax(unsigned int x);
int	ft_printf(const char *s, ...);

#endif
