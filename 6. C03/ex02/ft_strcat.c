/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:54:56 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/03 18:55:09 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
    char dest[20] = "Abbas";
    char src[] = " Shahsafi";

    printf("Before strcat: %s\n", dest);
    ft_strcat(dest, src);
    printf("After strcat: %s\n", dest); 
    return 0;
}

