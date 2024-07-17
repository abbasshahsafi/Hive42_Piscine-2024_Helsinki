/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:17:17 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/03 14:48:53 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
					&& str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "ABBAs&o";
	char	str2[] = "Hive42";
	char	str3[] = "";
	char	str4[] = "HIveAbbas";
	char	str5[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("str1: %s -> %d\n", str1, ft_str_is_alpha(str1));
	printf("str2: %s -> %d\n", str2, ft_str_is_alpha(str2));
	printf("str3: %s -> %d\n", str3, ft_str_is_alpha(str3));
	printf("str4: %s -> %d\n", str4, ft_str_is_alpha(str4));
	printf("str5: %s -> %d\n", str5, ft_str_is_alpha(str5));
	return (0);
}*/
