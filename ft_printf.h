/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiblanco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 23:19:05 by aiblanco          #+#    #+#             */
/*   Updated: 2023/01/09 23:19:19 by aiblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

int		ft_printf(char const *str, ...);
void	ft_printhex(unsigned int num, int *pcharcount, char c);
void	ft_printunnum(unsigned int num, int *pcharcount);
void	ft_printnum(int num, int *pcharcount);
void	ft_printptr(unsigned long long num, int *pcharcount);
void	ninehex(unsigned long long num, int *pcharcount);
int		ft_printstr(char *str, int *pcharcount);
void	ft_printchar(int character, int *pcharcount);

#endif
