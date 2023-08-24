/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CAPITALIZE.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:54:20 by mbernard          #+#    #+#             */
/*   Updated: 2023/08/14 11:17:12 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../C02/ex09/ft_strcapitalize.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	
	char	sentence_a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	sentence_b[] = "Salut, comMment tu vas ? 42mots qUArante-deux; cinquante+et+un";
	printf("SENTENCE : %s \n", sentence_a);
	printf("STR_CAPITALIZE : %s\n", ft_strcapitalize(sentence_a));
	printf("\n");
	printf("SENTENCE : %s \n", sentence_b);
	printf("STR_CAPITALIZE : %s\n", ft_strcapitalize(sentence_b));
	
}
