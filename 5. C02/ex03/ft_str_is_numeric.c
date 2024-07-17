/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:52:03 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/03 15:10:57 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*int main(void)
{
    char str1[] = "12333456";
    char str2[] = "123abbas456";
    char str3[] = "";
    char str4[] = "123 456";
    char str5[] = "0987654321";

    printf("str1: %s -> %d\n", str1, ft_str_is_numeric(str1));
    printf("str2: %s -> %d\n", str2, ft_str_is_numeric(str2));
    printf("str3: %s -> %d\n", str3, ft_str_is_numeric(str3));
    printf("str4: %s -> %d\n", str4, ft_str_is_numeric(str4));
    printf("str5: %s -> %d\n", str5, ft_str_is_numeric(str5));

    return (0);
}*/
