/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C08.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:57:16 by mbernard          #+#    #+#             */
/*   Updated: 2023/08/21 09:52:26 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../C08/ex01/ft_boolean.h"
#include "../C08/ex02/ft_abs.h"
#include "../C08/ex03/ft_point.h"
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	write(1, str++, 1);
}

t_bool	ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	 main(int argc, char **argv)
{
        int     x;
        int     y;
        int     z;

        x = 5;
        y = 0;
        z = -20;

        printf("%i\n", ABS(x));
        printf("%i\n", ABS(y));
        printf("%i\n\n", ABS(z));
	(void)argv;
	if	(ft_is_even(argc - 1) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);
	
	t_point point;
	set_point(&point);
	printf("\n");
	printf("Point x === %i\n", point.x);
	printf("Point y === %i\n", point.y);
	return (SUCCESS);
}
