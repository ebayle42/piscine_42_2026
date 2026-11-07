/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 21:15:52 by ebayle            #+#    #+#             */
/*   Updated: 2026/08/15 21:07:47 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	o;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		o = 0;
		while (o < size - i - 1)
		{
			if (tab[o] > tab [o + 1])
			{
				tmp = tab[o];
				tab[o] = tab[o + 1];
				tab[o + 1] = tmp;
			}
			o++;
		}
		i++;
	}
}
