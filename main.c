/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:52:18 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/19 22:27:43 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	// Variaveis
	char	*frase;
	int		tamanho;

	// Teste do c
	ft_printf("-------------------C-----------------\n");
	frase = "banana %c";
	tamanho = ft_printf(frase, 'b');
	// printf("%d", tamanho);
	ft_printf("\n-------------------------------------\n\n");
	
	// Teste do s
	ft_printf("-------------------S-----------------\n");
	frase = "banana %s";
	tamanho = ft_printf(frase, "é uma fruta");
	// printf("%d", tamanho);
	ft_printf("\n-------------------------------------\n\n");

	// Teste do %
	ft_printf("-------------------%-----------------\n");
	frase = "banana %%";
	tamanho = ft_printf(frase);
	ft_printf("\n-------------------------------------\n\n");

	return (0);
}