/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:40:25 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/03 15:50:37 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}


int	main(void)
{
	char	str1[] = "abbas";
	char	str2[] = "abbAS shahsafi";
	char	str3[] = "";
	char	str4[] = "aBBas ShAhsafi";


	printf("str1: %s -> %s\n", "abbas",
		ft_strupcase(str1));                      
	printf("str2: %s -> %s\n", "abbAS shahsafi",
		ft_strupcase(str2));               
	printf("str3: %s -> %s\n", "",
		ft_strupcase(str3));                           
	printf("str4: %s -> %s\n", "aBBas ShAhsafi",
		ft_strupcase(str4));                
                
	return (0);
}
