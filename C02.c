/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C02.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:54:20 by mbernard          #+#    #+#             */
/*   Updated: 2023/08/24 17:29:13 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex00/ft_strcpy.c"
#include "../ex01/ft_strncpy.c"
#include "../ex02/ft_str_is_alpha.c"
#include "../ex03/ft_str_is_numeric.c"
#include "../ex04/ft_str_is_lowercase.c"
#include "../ex05/ft_str_is_uppercase.c"
#include "../ex06/ft_str_is_printable.c"
#include "../ex07/ft_strupcase.c"
#include "../ex08/ft_strlowcase.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	
	char	source0[] = "";
	char	source1[] = "source";
	char	source2[] = "ada d/ada[da]ada}[da}da";
	char	source3[] = "a4684 6/56[d4354ada}[da}da";
	char	source4[] = "0123456789";
	char	source5[] = "012so45e";
	char	source6[] = "0123456789~a";
	char	source7[] = "a0123456789";
	char	source8[] = "source";
	char	source9[] = "sRource";
	char	source10[] = "SOURCE";
	char	source11[] = "sourceZ";
	char	source12[] = "Asource";
	char	alphabet_min[] = "abcdefghijklmnopqrstuvwxyz";
	char	alphabet_max[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	dest0[20];
	char	dest1[20];
	char	dest2[20];

	//printf("Empty : %s\n", (ft_strcpy(dest0, source0)==strcpy(dest0, source0))?"OK":"NO !");
	//printf("source1 : %s\n", (ft_strcpy(dest1, source1)==strcpy(dest1, source1))?"OK":"NO !");
	//printf("source2 : %s\n", (ft_strcpy(dest2, source2)==strcpy(dest2, source2))?"OK":"NO !");
/*
	char	c;

	c = 1;
	while (c != 0)
	{
		if ((c < ' ' || c > '~') == ft_str_is_printable(&c))
		{
			printf("Fail for char in decimal: %d\n", (int)c);
			return (0);
		}
		c++;
	}
*/

	printf("Success\n");
	int i;
	char dest[] = "Epic fail !!!!!";
	char src[] = "Success";
	printf("ALPHA %s : %i\n", source0, ft_str_is_alpha(source0));
	printf("ALPHA %s : %i\n", source1, ft_str_is_alpha(source1));
	printf("ALPHA %s : %i\n", source2, ft_str_is_alpha(source2));
	printf("ALPHA %s : %i\n", source3, ft_str_is_alpha(source3));
	printf("NUM %s : %i\n", source3, ft_str_is_numeric(source3));
	printf("NUM %s : %i\n", source4, ft_str_is_numeric(source4));
	printf("NUM %s : %i\n", source5, ft_str_is_numeric(source5));
	printf("NUM %s : %i\n", source6, ft_str_is_numeric(source6));
	printf("NUM %s : %i\n", source7, ft_str_is_numeric(source7));
	printf("LOWER %s : %i\n", source1, ft_str_is_lowercase(source3));
	printf("LOWER %s : %i\n", source2, ft_str_is_lowercase(source4));
	printf("LOWER %s : %i\n", source3, ft_str_is_lowercase(source5));
	printf("LOWER %s : %i\n", source4, ft_str_is_lowercase(source4));
	printf("LOWER %s : %i\n", source5, ft_str_is_lowercase(source5));
	printf("LOWER %s : %i\n", source6, ft_str_is_lowercase(source6));
	printf("LOWER %s : %i\n", source7, ft_str_is_lowercase(source7));
	printf("LOWER %s : %i\n", source8, ft_str_is_lowercase(source8));
	printf("LOWER %s : %i\n", source9, ft_str_is_lowercase(source9));
	printf("LOWER %s : %i\n", source10, ft_str_is_lowercase(source10));
	printf("LOWER %s : %i\n", source11, ft_str_is_lowercase(source11));
	printf("LOWER %s : %i\n", source12, ft_str_is_lowercase(source12));
	printf("LOWER %s : %i\n", alphabet_min, ft_str_is_lowercase(alphabet_min));
	printf("LOWER %s : %i\n", alphabet_max, ft_str_is_lowercase(alphabet_max));
	printf("UPPER %s : %i\n", source1, ft_str_is_uppercase(source3));
	printf("UPPER %s : %i\n", source2, ft_str_is_uppercase(source4));
	printf("UPPER %s : %i\n", source3, ft_str_is_uppercase(source5));
	printf("UPPER %s : %i\n", source4, ft_str_is_uppercase(source4));
	printf("UPPER %s : %i\n", source5, ft_str_is_uppercase(source5));
	printf("UPPER %s : %i\n", source6, ft_str_is_uppercase(source6));
	printf("UPPER %s : %i\n", source7, ft_str_is_uppercase(source7));
	printf("UPPER %s : %i\n", source8, ft_str_is_uppercase(source8));
	printf("UPPER %s : %i\n", source9, ft_str_is_uppercase(source9));
	printf("UPPER %s : %i\n", source10, ft_str_is_uppercase(source10));
	printf("UPPER %s : %i\n", source11, ft_str_is_uppercase(source11));
	printf("UPPER %s : %i\n", source12, ft_str_is_uppercase(source12));
	printf("UPPER %s : %i\n", alphabet_min, ft_str_is_uppercase(alphabet_min));
	printf("UPPER %s : %i\n", alphabet_max, ft_str_is_uppercase(alphabet_max));
	printf("STRUPCASE %s : %s\n", source1, ft_strupcase(source3));
	printf("STRUPCASE %s : %s\n", source2, ft_strupcase(source4));
	printf("STRUPCASE %s : %s\n", source3, ft_strupcase(source5));
	printf("STRUPCASE %s : %s\n", source4, ft_strupcase(source4));
	printf("STRUPCASE %s : %s\n", source5, ft_strupcase(source5));
	printf("STRUPCASE %s : %s\n", source6, ft_strupcase(source6));
	printf("STRUPCASE %s : %s\n", source7, ft_strupcase(source7));
	printf("STRUPCASE %s : %s\n", source8, ft_strupcase(source8));
	printf("STRUPCASE %s : %s\n", source9, ft_strupcase(source9));
	printf("STRUPCASE %s : %s\n", source10, ft_strupcase(source10));
	printf("STRUPCASE %s : %s\n", source11, ft_strupcase(source11));
	printf("STRUPCASE %s : %s\n", source12, ft_strupcase(source12));
	printf("STRUPCASE %s : %s\n", alphabet_min, ft_strupcase(alphabet_min));
	printf("STRUPCASE %s : %s\n", alphabet_max, ft_strupcase(alphabet_max));
	printf("STRUPCASE %s : %s\n", alphabet_max, ft_strupcase(alphabet_max));
	printf("STRUPCASE %s : %s\n", source1, ft_strlowcase(source3));
	printf("STRUPCASE %s : %s\n", source2, ft_strlowcase(source4));
	printf("STRUPCASE %s : %s\n", source3, ft_strlowcase(source5));
	printf("STRUPCASE %s : %s\n", source4, ft_strlowcase(source4));
	printf("STRLOWCASE %s : %s\n", source5, ft_strlowcase(source5));
	printf("STRLOWCASE %s : %s\n", source6, ft_strlowcase(source6));
	printf("STRLOWCASE %s : %s\n", source7, ft_strlowcase(source7));
	printf("STRLOWCASE %s : %s\n", source8, ft_strlowcase(source8));
	printf("STRLOWCASE %s : %s\n", source9, ft_strlowcase(source9));
	printf("STRLOWCASE %s : %s\n", source10, ft_strlowcase(source10));
	printf("STRLOWCASE %s : %s\n", source11, ft_strlowcase(source11));
	printf("STRLOWCASE %s : %s\n", source12, ft_strlowcase(source12));
	printf("STRLOWCASE %s : %s\n", alphabet_min, ft_strlowcase(alphabet_min));
	printf("STRLOWCASE %s : %s\n", alphabet_max, ft_strlowcase(alphabet_max));
	printf("STRLOWCASE %s : %s\n", alphabet_max, ft_strlowcase(alphabet_max));
	
	
}
