/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:32:56 by ebayle            #+#    #+#             */
/*   Updated: 2026/08/26 14:33:05 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	separator(char *c, char *charset)
{
	int	i;

	i = 0;
	while(charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *charset)
{	
	int i
	int count;

	i = 0;
	count = 0;
	while(charset[i])
	{
		if(charset[i] && charset[i - 1]	
	return (nbr)
}
char	**ft_split(char *str, char *charset)
{
	char **tab;
	tab = malloc(sizeof(char) * (count_words)

	tab[i] = '\0';
	return (tab)
}

#include <stdio.h>
int main(void)
{
	
	printf("%s", ft_split(
}
