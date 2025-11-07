/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <stee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:34:37 by stee              #+#    #+#             */
/*   Updated: 2025/11/07 17:20:43 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_handle(const char flag, const va_list args)
{
	if (flag == 'c')
		ft_putchar(va_arg(args, char));
	if (flag == 's')
		ft_putstr(va_arg(args, char *));
	if (flag == 'i' || flag == 'd')
		ft_putnbr(va_arg(args, int));
	if (flag == 'u')
		ft_putnbr(va_arg(args, unsigned int));
	if (flag == '%')
		ft_putchar('%');
	if (flag == 'p')
		ft_putptr(va_arg(args, void *));
	if (flag == 'x' || flag == 'X')
		ft_putstr(ft_tohexa(va_arg(args, int), flag));
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	args;
	va_start(args, s);

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			ft_handle(s[i + 1], args);
			i++;
		}
		else
			ft_putchar(s[i]);
		i++;
	}
	va_end(list);
	return (i);
}
