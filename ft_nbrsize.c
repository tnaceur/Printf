/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <tnaceur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 00:26:26 by tnaceur           #+#    #+#             */
/*   Updated: 2021/11/30 21:06:13 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_nbrsize(unsigned long long a, unsigned int base)
{
	int	size;

	size = 0;
	if (a == 0)
		size++ ;
	while (a != 0)
	{
		a /= base;
		size++;
	}
	return (size);
}
