/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:24:06 by snakajim          #+#    #+#             */
/*   Updated: 2024/07/14 18:52:18 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_formatted(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_printf_char(va_arg(ap, int));
	else if (c == 's')
		count += ft_printf_string(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		count += ft_printf_int(va_arg(ap, int));
	else if (c == 'u')
		count += ft_printf_unsigned(va_arg(ap, unsigned int));
	else if (c == 'x')
		count += ft_printf_hex(va_arg(ap, unsigned int), ft_tolower);
	else if (c == 'X')
		count += ft_printf_hex(va_arg(ap, unsigned int), ft_toupper);
	else if (c == 'p')
		count += ft_printf_pointer(va_arg(ap, void *));
	else if (c == '%')
		count += ft_printf_char('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1))
		{
			count += print_formatted(*(str + 1), ap);
			str++;
		}
		else
			count += ft_printf_char(*str);
	str++;
	}
	va_end(ap);
	return (count);
}
