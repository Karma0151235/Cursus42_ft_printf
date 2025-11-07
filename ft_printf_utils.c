/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <stee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:12:28 by stee              #+#    #+#             */
/*   Updated: 2025/11/07 17:29:41 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_tohexa(const int arg, const char flag)
{
	char	*base16;
	char	int_str[32];
	long	nbr;
	int		i;

	base16 = "0123456789abcdef";
	nbr = (long) arg;
	i = 1;
	if (nbr < 0)
	{
		int_str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		int_str[i] = base16[nbr % 16];
		nbr /= 16;
		i++;
	}
	if (flag == 'x')
		return (int_str);
	return (ft_toupper(int_str));
}
