/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <ashahsaf@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:36:07 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/15 20:36:27 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h> // for the write function

typedef int t_bool;

#define TRUE 1
#define FALSE 0
#define EVEN(n) ((n) % 2 == 0)
#define SUCCESS 0

#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"

#endif // FT_BOOLEAN_H
