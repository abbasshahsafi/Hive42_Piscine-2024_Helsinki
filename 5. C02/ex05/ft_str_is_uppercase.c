/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:12:41 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/03 15:28:21 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	// Test cases
	char str1[] = "abbas";
	char str2[] = "AbBas";
	char str3[] = "";
	char str4[] = "hello Friend";
	char str5[] = "abcdefghijklmnopqrstuvwxyz";

	printf("str1: %s -> %d\n", str1, ft_str_is_uppercase(str1));
	printf("str2: %s -> %d\n", str2, ft_str_is_uppercase(str2));
	printf("str3: %s -> %d\n", str3, ft_str_is_uppercase(str3));
	printf("str4: %s -> %d\n", str4, ft_str_is_uppercase(str4));
	printf("str5: %s -> %d\n", str5, ft_str_is_uppercase(str5));

	return (0);
}
