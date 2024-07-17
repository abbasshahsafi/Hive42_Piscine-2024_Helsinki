/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_str_is_printable.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:12:41 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/03 15:28:21 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	str1[] = "Helsinki";
	char	str2[] = "Hellsinki";
	char	str3[] = "";
	char	str4[] = "helsinki Hi";
	char	str5[] = "abcdefghijklmnopqrstuvwxyz";

	// Test cases
	printf("str1: %s -> %d\n", str1, ft_str_is_lowercase(str1));
	printf("str2: %s -> %d\n", str2, ft_str_is_lowercase(str2));
	printf("str3: %s -> %d\n", str3, ft_str_is_lowercase(str3));
	printf("str4: %s -> %d\n", str4, ft_str_is_lowercase(str4));
	printf("str5: %s -> %d\n", str5, ft_str_is_lowercase(str5));
	return (0);
}*/
