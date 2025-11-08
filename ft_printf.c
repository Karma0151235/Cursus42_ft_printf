/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <stee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:34:37 by stee              #+#    #+#             */
/*   Updated: 2025/11/07 17:29:26 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle(const char flag, va_list args)
{
	if (flag == 'c')
		return (ft_putchar_PF((char)va_arg(args, int)));
	if (flag == 's')
		return (ft_putstr_PF(va_arg(args, char *)));
	if (flag == 'i' || flag == 'd')
		return (ft_putnbr_PF(va_arg(args, int)));
	if (flag == 'u')
		return (ft_putunbr_PF(va_arg(args, unsigned int)));
	if (flag == '%')
		return (ft_putchar_PF('%'));
	if (flag == 'p')
		return (ft_putptr_PF(va_arg(args, void *)));
	if (flag == 'x' || flag == 'X')
		return (ft_puthexa_PF(va_arg(args, unsigned int), flag));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		bytes;
	va_list	args;

	va_start(args, s);
	i = 0;
	bytes = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			bytes += ft_handle(s[i + 1], args);
			i++;
		}
		else
			bytes += ft_putchar_PF(s[i]);
		i++;
	}
	va_end(args);
	return (bytes);
}
