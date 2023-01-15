/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 20:20:29 by vziegler          #+#    #+#             */
/*   Updated: 2023/01/02 17:47:41 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printp(unsigned long p)
{
	int	ret;

	ret = 0;
	if (p >= 16)
	{
		ret += ft_printp(p / 16);
		ret += ft_printp(p % 16);
	}
	else
	{
		if (p < 10)
			ret += ft_printc(p + 48);
		else
			ret += ft_printc(p + 87);
	}
	return (ret);
}
