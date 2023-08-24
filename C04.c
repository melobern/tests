/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C04.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:51:24 by mbernard          #+#    #+#             */
/*   Updated: 2023/08/16 17:24:00 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<string.h>
#include	"../C04/ex00/ft_strlen.c"
#include	"../C04/ex01/ft_putstr.c"
#include	"../C04/ex03/ft_atoi.c"

int	main(void)
{
	char	zero[] = "";
	char	four[] = "four";
	char	st1[] = "          -+-+-+--6464fou2454464r";
	char	st2[] = "          +--123456fou2454464r";
	char	st3[] = "          -+-+--e56789fou2454464r";

	printf("STRLEN\n\n");
	printf("Zero : %i\n", ft_strlen(zero));
	printf("Four : %i\n", ft_strlen(four));
	printf("\n\nPUTSTR\n\n");
	ft_putstr(zero);
	ft_putstr(four);
	printf("\n\n\nATOI\n\n");
	printf("ATOI st1 ===  %i\n", ft_atoi(st1));
	printf("ATOI st2 ===  %i\n", ft_atoi(st2));
	printf("ATOI st3 ===  %i\n", ft_atoi(st3));
}
