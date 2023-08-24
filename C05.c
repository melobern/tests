/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C05.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:04:28 by mbernard          #+#    #+#             */
/*   Updated: 2023/08/22 08:14:05 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../C05/ex00/ft_iterative_factorial.c"
#include "../C05/ex01/ft_recursive_factorial.c"
#include "../C05/ex02/ft_iterative_power.c"
#include "../C05/ex03/ft_recursive_power.c"
#include "../C05/ex04/ft_fibonacci.c"
#include "../C05/ex05/ft_sqrt.c"
//#include "../C05/ex06/ft_is_prime.c"
#include "../C05/ex07/ft_find_next_prime.c"
//#include "../C05/ex08/ft_ten_queens_puzzle.c"
int	main(void)
{
	printf("ITERATIVE FACTORIELLE\n"); 
	printf("-1 === %i\n", ft_iterative_factorial(-1));
	printf("0 === %i\n", ft_iterative_factorial(0));
	printf("1 === %i\n", ft_iterative_factorial(1));
	printf("2 === %i\n", ft_iterative_factorial(2));
	printf("3 === %i\n", ft_iterative_factorial(3));
	printf("4 === %i\n", ft_iterative_factorial(4));
	printf("5 === %i\n", ft_iterative_factorial(5));
	printf("7 === %i\n", ft_iterative_factorial(7));
	printf("8 === %i\n", ft_iterative_factorial(8));
	printf("9 === %i\n", ft_iterative_factorial(9));

	printf("RECURSIVE FACTORIELLE\n"); 
	printf("-1 === %i\n", ft_recursive_factorial(-1));
	printf("0 === %i\n", ft_recursive_factorial(0));
	printf("1 === %i\n", ft_recursive_factorial(1));
	printf("2 === %i\n", ft_recursive_factorial(2));
	printf("3 === %i\n", ft_recursive_factorial(3));
	printf("4 === %i\n", ft_recursive_factorial(4));
	printf("5 === %i\n", ft_recursive_factorial(5));
	printf("7 === %i\n", ft_recursive_factorial(7));
	printf("8 === %i\n", ft_recursive_factorial(8));
	printf("9 === %i\n", ft_recursive_factorial(9));

	printf("ITERATIVE POWER\n"); 
	printf("-2090, -3797  === %i\n", ft_iterative_power(-2090, -3797));
	printf("0, 0 === %i\n", ft_iterative_power(0, 0));
	printf("3889, 0 === %i\n", ft_iterative_power(3889, 0));
	printf("-978, 1 === %i\n", ft_iterative_power(-978 , 1));
	printf("0, 2 === %i\n", ft_iterative_power(0, 2));
	printf("2, 3 === %i\n", ft_iterative_power(2, 3));
	printf("-7, 10 === %i\n", ft_iterative_power(-7, 10));
	printf("4, 4 === %i\n", ft_iterative_power(4, 4));
	
	printf("RECURSIVE POWER\n"); 
	printf("-2090, -3797  === %i\n", ft_recursive_power(-2090, -3797));
	printf("0, 0 === %i\n", ft_recursive_power(0, 0));
	printf("3889, 0 === %i\n", ft_recursive_power(3889, 0));
	printf("-978, 1 === %i\n", ft_recursive_power(-978 , 1));
	printf("0, 2 === %i\n", ft_recursive_power(0, 2));
	printf("2, 3 === %i\n", ft_recursive_power(2, 3));
	printf("-7, 10 === %i\n", ft_recursive_power(-7, 10));
	printf("4, 4 === %i\n", ft_recursive_power(4, 4));

	printf("FIBONACCI POWER\n"); 
	printf("-2 === %i\n", ft_fibonacci(-2));
	printf("-1 === %i\n", ft_fibonacci(-1));
	printf("0 === %i\n", ft_fibonacci(0));
	printf("1 === %i\n", ft_fibonacci(1));
	printf("2 === %i\n", ft_fibonacci(2));
	printf("3 === %i\n", ft_fibonacci(3));
	printf("4 === %i\n", ft_fibonacci(4));
	printf("5 === %i\n", ft_fibonacci(5));
	printf("6 === %i\n", ft_fibonacci(6));
	printf("7 === %i\n", ft_fibonacci(7));
	printf("8 === %i\n", ft_fibonacci(8));
	printf("9 === %i\n", ft_fibonacci(9));
	
	printf("SQUARE\n"); 
	printf("-3 === %i\n", ft_sqrt(-3));
	printf("-2 === %i\n", ft_sqrt(-2));
	printf("-1 === %i\n", ft_sqrt(-1));
	printf("0 === %i\n", ft_sqrt(0));
	printf("1 === %i\n", ft_sqrt(1));
	printf("2 === %i\n", ft_sqrt(2));
	printf("4 === %i\n", ft_sqrt(4));
	printf("5 === %i\n", ft_sqrt(5));
	printf("8 === %i\n", ft_sqrt(8));
	printf("9 === %i\n", ft_sqrt(9));
	printf("2147395600	must be	46340	===	%i\n", ft_sqrt(2147395600));
	printf("1916338176	must be	43776	===	%i\n", ft_sqrt(1916338176));
	printf("237160000	must be	15400	===	%i\n", ft_sqrt(237160000));
	printf("32913169	must be	5737	===	%i\n", ft_sqrt(32913169));
	printf("377835844	must be	19438 	===	%i\n", ft_sqrt(377835844));
	printf("830361856	must be	28816	===	%i\n", ft_sqrt(830361856));

	/*
+sqrt of 2147395600 is 46340$
+sqrt of 1916338176 is 43776$
+sqrt of 237160000 is 15400$
+sqrt of 32913169 is 5737$
+sqrt of 377835844 is 19438$
+sqrt of 830361856 is 28816$
*/

	printf("\nIS PRIME\n");
	int x = -2;
	while (x < 101)
	{
		if (ft_is_prime(x))
			printf("%i === %i\n", x,  ft_is_prime(x));
		x++;
	}
	printf("%i === %i\n", 2147483647,  ft_is_prime(2147483647));


	int y = 2147483647;
	printf("\nNEXT PRIME\n");
		printf("%i === %i\n", y,  ft_find_next_prime(y));
	int z = -2;
	while (z < 101)
	{
		printf("%i === %i\n", z,  ft_find_next_prime(z));
		z++;
	}
	printf("%i === %i\n", 2147483647,  ft_is_prime(2147483647));
	return (0);

//	printf("%i\n", ft_ten_queens_puzzle());
}
