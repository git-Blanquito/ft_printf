/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiblanco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 23:32:09 by aiblanco          #+#    #+#             */
/*   Updated: 2023/01/14 23:32:17 by aiblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printptr(unsigned long long num, int *pcharcount)
{
	int					i;
	unsigned long long	j;

	i = 0;
	j = num;
	write(1, "0x", 2);
	*pcharcount = *pcharcount + 2;
	ninehex(num, pcharcount);
}
