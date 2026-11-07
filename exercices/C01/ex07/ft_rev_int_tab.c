/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 19:13:26 by ebayle            #+#    #+#             */
/*   Updated: 2026/08/14 21:14:39 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	o;

	i = 0;
	o = size - 1;
	while (i < o)
	{
		temp = tab[i];
		tab[i] = tab[o];
		tab[o] = temp;
		temp = 0;
		i++;
		o--;
	}
}
