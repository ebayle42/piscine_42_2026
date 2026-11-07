/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 15:12:03 by ebayle            #+#    #+#             */
/*   Updated: 2026/08/06 10:00:47 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c < 10)
			{
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
				if (a < 7 && b < 9 && c < 10)
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
