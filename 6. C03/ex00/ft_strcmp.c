/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:35:30 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/03 18:36:37 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

#include <stdio.h>

// Function prototype
int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char str1[] = "Abbas";
    char str2[] = "YOU";
    char str3[] = "Helsinki";
    char str4[] = "Tehran";

    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str2, ft_strcmp(str1, str2));
    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str3, ft_strcmp(str1, str3));
    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str4, ft_strcmp(str1, str4));
    return 0;
}

