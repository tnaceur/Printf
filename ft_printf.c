/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <tnaceur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 00:33:21 by tnaceur           #+#    #+#             */
/*   Updated: 2021/11/30 21:10:01 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_porcentage2(va_list ap, const char *s)
{
	unsigned int	count;
	unsigned int	i;

	i = 0;
	count = 0;
	if (s[i] == 'x')
		count += ft_printhexa(va_arg(ap, unsigned int));
	else if (s[i] == 'X')
		count += ft_print_hexa(va_arg(ap, unsigned int));
	else if (s[i] == '%')
	{
		write(1, "%", 1);
		count++ ;
	}
	return (count);
}

int	ft_porcentage(va_list ap, const char *s)
{
	unsigned int	count;
	unsigned int	i;

	i = 0;
	count = 0;
	if (s[i] == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (s[i] == 'd' || s[i] == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (s[i] == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (s[i] == 'u')
		count += ft_putnbr2(va_arg(ap, unsigned int));
	else if (!s[i])
		write(1, "", 0);
	else if (s[i] == 'p')
		count += ft_putadress(va_arg(ap, unsigned long long));
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list			ap;
	unsigned int	count;

	if (!s)
		return (0);
	count = 0;
	va_start(ap, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++ ;
			if (!s)
				return (count);
			count += ft_porcentage(ap, s);
			count += ft_porcentage2(ap, s);
		}
		else
			count += ft_putchar(*s);
		s++ ;
	}
	va_end(ap);
	return (count);
}
