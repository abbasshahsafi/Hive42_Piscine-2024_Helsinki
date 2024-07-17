/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:37:51 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/03 21:38:00 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i = 0;
    unsigned int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (j < nb && src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
    char dest[20] = "Abbas";
    char src[] = " Shahsafi";

    printf("Before strncat: %s\n", dest);
    ft_strncat(dest, src, 3);
    printf("After strncat with 3 chars: %s\n", dest); 
    return 0;
}


