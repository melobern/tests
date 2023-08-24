/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C03.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:47:18 by mbernard          #+#    #+#             */
/*   Updated: 2023/08/15 13:36:42 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "/home/mbernard/Documents/C03/ex00/ft_strcmp.c"
#include "/home/mbernard/Documents/C03/ex01/ft_strncmp.c"
#include "/home/mbernard/Documents/C03/ex02/ft_strcat.c"
#include "/home/mbernard/Documents/C03/ex03/ft_strncat.c"
#include "/home/mbernard/Documents/C03/ex04/ft_strstr.c"
#include "/home/mbernard/Documents/C03/ex05/ft_strlcat.c"

int	main(void)
{
	char	st1[]= "Coucou";
	char	st2[]= "Coucou";
	char	st3[]= "C";
	char	st4[]= "";
	char	st5[]= "kjjh";
	char	st6[]= "Couc";
	char	src1[]= "_closed";
	char	src1ELSE[]= "_closed";
	char	src2[]= "Pokemon 2";
	char	src2a[]= "Pokemon 2";
	char	src3[]= "";
	char	src3a[]= "";
	char	src4[]= "Yolo 4";
	char	src4a[]= "Yolo 4";
	char	src5[]= "123456";
	char	src5a[]= "123456";
	char	src6[]= "123";
	char	src6a[]= "123";
	char	dest1[30]= "Destination!";
	char	dest1ELSE[30]= "Destination!";
	char	dest2[20]= "Pikachu !";
	char	dest2a[20]= "Pikachu !";
	char	dest3[20]= "Alright";
	char	dest3a[20]= "Alright";
	char	dest4[20]= "This is so long";
	char	dest4a[20]= "This is so long";
	char	dest5[20]= "";
	char	dest5a[20]= "";
	char	dest6[20]= "okay !";
	char	dest6a[20]= "okay !";

	printf("STRCMP\n\n");
	printf("%i = %i ?\n", ft_strcmp(st1,st2), strcmp(st1, st2));
	printf("%i = %i ?\n", ft_strcmp(st2,st3), strcmp(st2, st3));
	printf("%i = %i ?\n", ft_strcmp(st3,st4), strcmp(st3, st4));
	printf("%i = %i ?\n", ft_strcmp(st4,st5), strcmp(st4, st5));
	printf("%i = %i ?\n", ft_strcmp(st5,st4), strcmp(st5, st4));

	printf("STRNCMP\n\n");
	printf("%i = %i ?\n", ft_strncmp(st1,st2, 5), strncmp(st1, st2, 5));
	printf("%i = %i ?\n", ft_strncmp(st1,st5, 4), strncmp(st1, st5, 4));
	printf("%i = %i ?\n", ft_strncmp(st1,st6, 4), strncmp(st1, st6, 4));
	printf("%i = %i ?\n", ft_strncmp(st2,st3, 0), strncmp(st2, st3, 0));
	printf("%i = %i ?\n", ft_strncmp(st3,st4, 3), strncmp(st3, st4, 3));
	printf("%i = %i ?\n", ft_strncmp(st5,st4, 1), strncmp(st5, st4, 1));
	printf("%i = %i ?\n", ft_strncmp(st5,st4, 7), strncmp(st5, st4, 7));
	printf("%i = %i ?\n", ft_strncmp(st5,st4, 9), strncmp(st5, st4, 9));
	printf("%i = %i ?\n", ft_strncmp(st5,st4, 15), strncmp(st5, st4, 15));

	printf("STRCAT :\n\n");
	printf("DEST = %s SOURCE = %s \n", dest1, src1);
	ft_strcat(dest1, src1);
       	strcat(dest1ELSE, src1ELSE);
	printf("my vs strcat : %s ====== %s ?\n\n", dest1, dest1ELSE);
	
	printf("DEST = %s SOURCE = %s \n", dest2, src2);
	ft_strcat(dest2, src2);
	strcat(dest2a, src2a);
	printf("my vs strcat : %s ====== %s ?\n\n", dest2, dest2a);
	
	printf("DEST = %s SOURCE = %s \n", dest3, src3);
	ft_strcat(dest3, src3);
	strcat(dest3a, src3a);
	printf("my vs strcat : %s ====== %s ?\n\n", dest3, dest3a);
	
	printf("DEST = %s SOURCE = %s \n", dest4, src4);
	ft_strcat(dest4, src4);
	strcat(dest4a, src4a);
	printf("my vs strcat : %s ====== %s ?\n\n", dest4, dest4a);
	
	printf("DEST = %s SOURCE = %s \n", dest5, src5);
	ft_strcat(dest5, src5);
	strcat(dest5a, src5a);
	printf("my vs strcat : %s ====== %s ?\n\n", dest5, dest5a);
	
	printf("DEST = %s SOURCE = %s \n", dest6, src6a);
	ft_strcat(dest6, src6);
	strcat(dest6a, src6a);
	printf("my vs strcat : %s ====== %s ?\n\n", dest6, dest6a);

	printf("STRNCAT :\n\n");

	char ncat1a[10] = "Pokemon";
	char ncat2a[10] = "Go !";
	char ncat3a[1] = "";
	char ncat4a[10] = "Oups";
	char ncat1b[10] = "Pokemon";
	char ncat2b[10] = "Go !";
	char ncat3b[1] = "";
	char ncat4b[10] = "Oups";

	printf("DEST = %s SOURCE = %s NUM = %i\n", ncat1a, ncat2a, 3);
	ft_strncat(ncat1a, ncat2a, 3);
       	strncat(ncat1b, ncat2b, 3);
	printf("my vs strncat : %s ====== %s ?\n\n", ncat1a, ncat1b);

	printf("DEST = %s SOURCE = %s NUM = %i\n", ncat3a, ncat4a, 1);
	ft_strncat(ncat3a, ncat4a, 1);
       	strncat(ncat3b, ncat4b, 1);
	printf("my vs strncat : %s ====== %s ?\n\n", ncat3a, ncat3b);

	printf("DEST = %s SOURCE = %s NUM = %i\n", ncat1a, ncat2a, 4);
	ft_strncat(ncat1a, ncat2a, 4);
       	strncat(ncat1b, ncat2b, 4);
	printf("my vs strncat : %s ====== %s ?\n\n", ncat1a, ncat1b);
	
	char s1a[10] = "Test1 OK";
	char s2a[] = "OK";
	char s1b[10] = "Test1 OK";
	char s2b[] = "OK";
	char s3a[10] = "Same";
	char s4a[] = "Size";
	char s3b[10] = "Same";
	char s4b[] = "Size";
	char s5a[20] = "Shorter";
	char s6a[] = "ThanMyself";
	char s5b[20] = "Shorter";
	char s6b[] = "ThanMyself";

	printf("\nSTRSTR :\n\n");
	printf("%s : %s\n", ft_strstr(s1a, s2a), strstr(s1b, s2b));
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? "Success" : "Fail");
	printf("%s : %s\n", ft_strstr(s3a, s4a), strstr(s3b, s4b));
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ? "Success" : "Fail");
	printf("%s : %s\n", ft_strstr(s5a, s6a), strstr(s5b, s6b));
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? "Success" : "Fail");

	char	dest_size[20] = "Hey";
	printf("Just a sizeof to see what it returns : %li ==== %i\n", sizeof(ncat3a), (unsigned int)sizeof(ncat3b));
	printf("Just a sizeof to see what it returns : %li\n", sizeof(dest_size));

	printf("\nSTRLCAT :\n\n");
	char s1za[1] = "Z";
	char s2za[] = "Very long";
	char s3za[10] = "Same";
	char s4za[] = "Size";
	char s5za[20] = "Shorter";
	char s6za[] = "ThanMyself";
	char s7za[20] = "Shorter";
	char s8za[] = "_ThanMyself";

	printf("%s, %s, sizeof(dest) = %li, size = 6\n", s1za, s2za, sizeof(s1za));
	printf("%i\n", ft_strlcat(s1za, s2za, 1));
	printf("%s\n\n", s1za);

	printf("%s, %s 10\n", s3za, s4za);
	printf("%i\n", ft_strlcat(s3za, s4za, 10));
	printf("%s\n\n", s3za);
	
	printf("%s, %s 4\n", s5za, s6za);
	printf("%i\n", ft_strlcat(s5za, s6za, 4));
	printf("%s\n\n", s5za);
	
	printf("%s, %s, 20\n", s7za, s8za);
	printf("%i\n", ft_strlcat(s7za, s8za, 20));
	printf("%s\n\n", s7za);
}
