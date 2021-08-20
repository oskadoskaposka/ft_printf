/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:52:18 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/19 23:33:30 by apaduan-         ###   ########.fr       */
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
	frase = "Tem que printar 'b' e printa: %c";
	tamanho = ft_printf(frase, 'b');
	ft_printf("\nTamanho esperado 31, retornado: %d", tamanho);
	ft_printf("\n-------------------------------------\n\n");
	
	// Teste do s
	ft_printf("-------------------S-----------------\n");
	frase = "banana %s";
	tamanho = ft_printf(frase, "é uma fruta");
	ft_printf("%d", tamanho);
	ft_printf("\n-------------------------------------\n\n");

	// Teste do %
	ft_printf("-------------------%-----------------\n");
	frase = "banana %%";
	tamanho = ft_printf(frase);
	ft_printf("\n-------------------------------------\n\n");

	// Teste do di
	ft_printf("------------------DI-----------------\n");
	frase = "usando a flag d, valor positivo: %d";
	tamanho = ft_printf(frase, 165);
	ft_printf("\n");
	frase = "usando a flag d, valor negativo: %d";
	tamanho = ft_printf(frase, -1585);
	ft_printf("\n\n");
	frase = "usando a flag i, valor positivo: %i";
	tamanho = ft_printf(frase, 15888);
	ft_printf("\n");
	frase = "usando a flag i, valor negativo: %i";
	tamanho = ft_printf(frase, -147777);
	ft_printf("\n-------------------------------------\n\n");

	// Teste do u
	ft_printf("-------------------U-----------------\n");
	frase = "usando a flag u, valor positivo: %u";
	tamanho = ft_printf(frase, 165);
	ft_printf("\n");
	frase = "usando a flag u, valor negativo: %u";
	tamanho = ft_printf(frase, -1);
	ft_printf("\n-------------------------------------\n\n");
	
	return (0);
}