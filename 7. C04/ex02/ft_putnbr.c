/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <ashahsaf@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 09:47:14 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/12 09:47:25 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function to print a character
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Function to print an integer
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

// Main function to demonstrate ft_putnbr and ft_putchar
int	main(void)
{
	ft_putnbr(42);       // Should print "42"
	ft_putchar('\n');    // New line
	ft_putnbr(-42);      // Should print "-42"
	ft_putchar('\n');    // New line
	ft_putnbr(0);        // Should print "0"
	ft_putchar('\n');    // New line
	ft_putnbr(2147483647); // Should print "2147483647"
	ft_putchar('\n');    // New line
	ft_putnbr(-2147483648); // Should print "-2147483648"
	ft_putchar('\n');    // New line

	return (0);
}

