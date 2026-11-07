/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:35:01 by ebayle            #+#    #+#             */
/*   Updated: 2026/08/04 17:43:20 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;	
	char	d;

	c = 'a';
	d = 'z';
	while (d >= c)
	{
		write(1, &d, 1);
		d--;
	}
}
