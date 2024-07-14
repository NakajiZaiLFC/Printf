/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:55:27 by snakajim          #+#    #+#             */
/*   Updated: 2024/07/14 18:11:08 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include "../libft/libft.h"
# define HEX "0123456789abcdef"

int		ft_printf(const char *str, ...);
int		ft_printf_char(int c);
int		ft_printf_string(char *str);
int		ft_printf_int(int n);
int		ft_printf_unsigned(unsigned int n);
int		ft_printf_hex(unsigned int n, int (*up_or_low)(int));
int		ft_printf_pointer(void *ptr);

#endif