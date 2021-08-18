/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:27:26 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/17 21:24:41 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

int	ft_printf(const char *string, ...)
{
	int		len;
	int		printed;
	va_list	flags;
	
	len = ft_strlen(string); //len no tamanho da string
	va_start(flags, string);
	
	printed = 0;
	while (len > 0 && len--)
	{
		//chegar o char da str se é '%'
			// se for, olhar o proximo char se é c s p d i u x X %
			// se for, converter flag e add na str??
			// se não for, imprimir?
		//imprimir toda str
		ft_putchar_fd(*string, 1);
		string++;
	}

	va_end(flags);
	
	ft_putchar_fd('\n', 1); //apagar, serve apenas para visualizar melhor 

	return (printed);
	
}