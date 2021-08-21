/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:30:30 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/21 10:22:54 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "Libft/libft.h"

//arquivos da Printf
int	ft_printf(const char *string, ...);
int	functions_flags(va_list args, int flag);

//arquivos das flags
int	ft_print_c(int c);
int	ft_print_s(char *string);
int	ft_print_di(int c);
int	ft_print_u(unsigned int c);
int	ft_print_x(unsigned int c, int letter);
int	ft_print_p(unsigned long long c, int letter);

#endif