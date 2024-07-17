/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <ashahsaf@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:52:09 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/16 16:52:17 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>  // for malloc and free
#include <unistd.h>  // for write
#include "ft_stock_str.h"

// Prototype for ft_strs_to_tab function
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

// Prototype for ft_show_tab function
void ft_show_tab(struct s_stock_str *par);

int main(int argc, char **argv)
{
    struct s_stock_str *stock_array;

    stock_array = ft_strs_to_tab(argc - 1, argv + 1);
    if (!stock_array)
    {
        write(1, "Error: Memory allocation failed\n", 32);
        return 1;
    }
    ft_show_tab(stock_array);
    // Free allocated memory
    for (int i = 0; i < argc - 1; i++)
        free(stock_array[i].copy);
    free(stock_array);
    return 0;
}
