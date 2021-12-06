/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrsize2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:10:12 by tnaceur           #+#    #+#             */
/*   Updated: 2021/11/30 21:11:59 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_nbrsize2(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size++ ;
	if (n < 0)
	{
		n = -n;
		size++ ;
	}
	while (n > 0)
	{
		n /= 10;
		size++ ;
	}
	return (size);
}