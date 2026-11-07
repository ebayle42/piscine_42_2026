/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 13:59:55 by ebayle            #+#    #+#             */
/*   Updated: 2026/08/11 19:32:15 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
