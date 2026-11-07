/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 04:42:40 by ebayle            #+#    #+#             */
/*   Updated: 2026/08/19 10:51:51 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;
	int	o;

	i = 0;
	o = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		n;
	char	c;

	n = 1;
	c = '\n';
	while (n < argc)
	{
		ft_putstr(argv[n]);
		write(1, &c, 1);
		n++;
	}
	return (0);
}
