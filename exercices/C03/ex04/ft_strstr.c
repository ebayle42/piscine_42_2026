/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 11:20:34 by ebayle            #+#    #+#             */
/*   Updated: 2026/08/20 15:48:18 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	o;

	i = 0;
	while (str[i])
	{
		o = 0;
		while (str[i + o] != '\0' && str[i + o] == to_find[o])
			o++;
		if (to_find[o] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
