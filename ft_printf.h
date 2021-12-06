/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnaceur <tnaceur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:47:58 by tnaceur           #+#    #+#             */
/*   Updated: 2021/11/30 21:13:08 by tnaceur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_nbrsize(unsigned long long a, unsigned int base);
int	ft_putnbr(long long nb);
int	ft_putstr(char *s);
int	ft_printf(const char *s, ...);
int	ft_print_hexa(unsigned long n);
int	ft_printhexa(unsigned long long n);
int	ft_putadress(unsigned long long p);
int	ft_nbrsize2(int n);
int	ft_putnbr2(unsigned int nb);

#endif
