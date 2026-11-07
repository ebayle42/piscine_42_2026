/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 16:58:31 by ebayle            #+#    #+#             */
/*   Updated: 2026/08/17 10:58:16 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_lentotal(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += (ft_strlen(sep) * size - 1);
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		o;
	char	*reponse;

	i = 0;
	o = 0;
	reponse = malloc(sizeof(char) * (ft_lentotal(size, strs, sep) + 1));
	if (!reponse)
		return (0);
	while (i < size)
	{
		ft_strcpy(reponse + o, strs[i]);
		o += ft_strlen(strs[i]);
		if (i < size -1)
		{
			ft_strcpy(reponse + o, sep);
			o += ft_strlen(sep);
		}
		i++;
	}
	reponse[o] = '\0';
	return (reponse);
}
