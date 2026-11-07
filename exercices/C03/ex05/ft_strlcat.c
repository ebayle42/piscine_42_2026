/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 14:27:37 by ebayle            #+#    #+#             */
/*   Updated: 2026/08/20 18:31:52 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	o;
	unsigned int	len_src;
	unsigned int	len_dest;

	i = 0;
	o = 0;
	while (i < size && dest[i] != '\0')
		i++;
	len_dest = i;
	while (src[o] != '\0')
		o++;
	len_src = o;
	if (size <= len_dest)
		return (size + len_src);
	while (src[o] != '\0' && i < size - 1)
	{
		dest[i] = src[o];
		i++;
		o++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}
