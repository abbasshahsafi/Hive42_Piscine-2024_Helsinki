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
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum e_bool
{
	false = 0,
	true = 1
}	t_bool;

# define FALSE false
# define TRUE true

// Instead of a macro function or ternary, we use a simple function
static inline t_bool	ft_is_even(int number)
{
	if (number % 2 == 0)
		return (TRUE);
	else
		return (FALSE);
}

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

# define SUCCESS 0

#endif
