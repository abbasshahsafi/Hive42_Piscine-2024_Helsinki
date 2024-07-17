/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <ashahsaf@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:06:41 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/16 14:06:46 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
    char    *str;
    char    *new_str;

    str = "Abbas Shahsafi";
    new_str = ft_strdup(str);
    printf("%s\n", new_str);
}
