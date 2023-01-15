/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 16:20:56 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/02 17:35:50 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_check(va_list args, const char check);
int	ft_printc(int c);
int	ft_prints(char *s);
int	ft_printi(int i);
int	ft_printu(unsigned int u);
int	ft_printp(unsigned long p);
int	ft_printx(unsigned int x, int s);

#endif