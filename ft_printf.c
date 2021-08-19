/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:27:26 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/18 23:04:00 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	functions_flags(va_list args, int flag)
{
	int	printed;

	printed = 0;
	if(flag == 'c') //if flag rodar função?
		printed = ft_print_c(va_arg(args, int));
	return (printed);
}

int	ft_printf(const char *string, ...)
{
	int		printed;
	va_list	flags;
	
	va_start(flags, string); //start o va_list
	
	printed = 0;
	while (*string) //itera até atingir o final da str
	{
		if(*string == '%' && ft_strchr("cspdiuxX%", string[1])) // checa o char da str se é '%' e se o proximo é "cspdiuxX%" 
		{
			printed = functions_flags(flags, string[1]); //pular pra funçao de cada uma das flags;
			string = string + 2;
		}
		else //se nao, imprimir cada char da str
		{
			ft_putchar_fd(*string, 1);
			printed = printed + 1;
			string = string + 1;
		}
	}

	va_end(flags);
	ft_putchar_fd('\n', 1); //apagar, serve apenas para visualizar melhor 
	return (printed);
}