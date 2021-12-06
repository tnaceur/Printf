/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <tnaceur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 23:49:01 by tnaceur           #+#    #+#             */
/*   Updated: 2021/11/30 21:03:43 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_hexa(unsigned long n)
{
	if (n > 15)
		ft_print_hexa(n / 16);
	if (n % 16 >= 10 && n % 16 <= 16)
		ft_putchar((n % 16) + 55);
	if ((n % 16) <= 9)
		ft_putchar((n % 16) + '0');
	return (ft_nbrsize(n, 16));
}
