/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <stee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:09:53 by stee              #+#    #+#             */
/*   Updated: 2025/11/07 17:34:16 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *s, ...);
int	ft_handle(const char flag, const va_list args);
int	ft_putchar_PF(char c);
int	ft_putstr_PF(char *s);
int	ft_puthexa_PF(unsigned long arg, const char flag);
int	ft_putnbr_PF(int c);
int	ft_putunbr_PF(unsigned int c);
int	ft_putptr_PF(void *ptr);

#endif