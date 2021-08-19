/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:52:18 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/18 23:03:09 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main (void)
{
	char teste[] = "banana %c";
	int tamanho;

	tamanho = ft_printf(teste, 97);
	ft_printf("%c", tamanho);
	return (0);
}