/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:41:24 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/03 21:41:38 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j;

    if (to_find[0] == '\0')
        return str;
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] == to_find[j] && to_find[j] != '\0')
        {
            j++;
        }
        if (to_find[j] == '\0')
            return &str[i];
        i++;
    }
    return 0;
}
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
    char str[] = "Abbas Shahsafi";
    char to_find1[] = "Abbas";
    char to_find2[] = "Helsinki";

    printf("Searching \"%s\" in \"%s\": %s\n", to_find1, str, ft_strstr(str, to_find1)); 
    printf("Searching \"%s\" in \"%s\": %s\n", to_find2, str, ft_strstr(str, to_find2));
    return 0;
}


