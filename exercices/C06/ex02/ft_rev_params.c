/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 05:25:10 by ebayle            #+#    #+#             */
/*   Updated: 2026/08/11 16:45:07 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		n;
	char	c;

	n = 1;
	c = '\n';
	while (argc > n)
	{
		ft_putstr(argv[argc - n]);
		write(1, &c, 1);
		n++;
	}
	return (0);
}
