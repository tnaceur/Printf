/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:17:56 by tnaceur           #+#    #+#             */
/*   Updated: 2021/11/30 21:03:53 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printhexa(unsigned long long n)
{
	if (n > 15)
		ft_printhexa(n / 16);
	if (n % 16 >= 10 && n % 16 <= 16)
		ft_putchar((n % 16) + 87);
	if ((n % 16) <= 9)
		ft_putchar((n % 16) + '0');
	return (ft_nbrsize(n, 16));
}
