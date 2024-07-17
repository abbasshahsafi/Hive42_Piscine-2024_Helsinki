/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:47:07 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/03 21:47:18 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// File: ft_strlcat.c
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int dest_len = 0;
    unsigned int src_len = 0;

    while (dest[dest_len] != '\0')
        dest_len++;
    while (src[src_len] != '\0')
        src_len++;
    if (size <= dest_len)
        return (size + src_len);
    i = dest_len;
    while (src[j] != '\0' && i < size - 1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest_len + src_len);
}

#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
    char dest[20] = "Hello";
    char src[] = " World";
    unsigned int size = 11;

    printf("Before strlcat: %s\n", dest);
    unsigned int result = ft_strlcat(dest, src, size);
    printf("After strlcat: %s\n", dest); 
    printf("Total length: %u\n", result);
    return 0;
}



