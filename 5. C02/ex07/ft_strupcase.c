/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
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
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char	str1[] = "abbas";
	char	str2[] = "abbas shahsafi";
	char	str3[] = "";
	char	str4[] = "AbBas ShAHsafi";
	char	str5[] = "abcdefghijklmnopqrstuvwxyz";
	char	str6[] = "1234!@#";

	printf("str1: %s -> %s\n", "abbas",
		ft_strupcase(str1));                      
	printf("str2: %s -> %s\n", "abbas shahsafi",
		ft_strupcase(str2));               
	printf("str3: %s -> %s\n", "",
		ft_strupcase(str3));                           
	printf("str4: %s -> %s\n", "AbBas ShAHsafi",
		ft_strupcase(str4));                
	printf("str5: %s -> %s\n", "abcdefghijklmnopqrstuvwxyz",
		ft_strupcase(str5)); 
		-> "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	printf("str6: %s -> %s\n", "1234!@#",
		ft_strupcase(str6));                    
	return (0);
}*/
