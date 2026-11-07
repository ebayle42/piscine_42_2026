/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 22:58:10 by ebayle            #+#    #+#             */
/*   Updated: 2026/08/11 04:23:20 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (nb > 0 && power > 0)
		return (ft_recursive_power(nb, power -1) * nb);
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb > 0 && power == 0)
		return (1);
	return (0);
}
