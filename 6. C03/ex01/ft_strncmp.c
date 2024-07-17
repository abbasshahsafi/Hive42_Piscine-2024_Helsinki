/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:40:50 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/03 18:40:59 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	str1[] = "Abbas";
	char	str2[] = "Youself";
	char	str3[] = "She!";
	char	str4[] = "he";

	printf("Comparing \"%s\" and \"%s\" for first 5 chars: %d\n", str1, str2,
		ft_strncmp(str1, str2, 5));
	printf("Comparing \"%s\" and \"%s\" for first 6 chars: %d\n", str1, str3,
		ft_strncmp(str1, str3, 6));
	printf("Comparing \"%s\" and \"%s\" for first 4 chars: %d\n", str1, str4,
		ft_strncmp(str1, str4, 4));
	printf("Comparing \"%s\" and \"%s\" for first 5 chars: %d\n", str1, str4,
		ft_strncmp(str1, str4, 5));
	return (0);
}
