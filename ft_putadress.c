/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <tnaceur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:20:48 by tnaceur           #+#    #+#             */
/*   Updated: 2021/11/30 20:51:13 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putadress(unsigned long long p)
{
	int	count;

	count = 0;
	ft_putstr("0x");
	count += ft_printhexa(p);
	return (count + 2);
}
