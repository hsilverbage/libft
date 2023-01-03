/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_with_substr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:25:07 by hsilverb          #+#    #+#             */
/*   Updated: 2023/01/03 19:05:35 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static size_t	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] != c && s[i])
				i++;
			counter++;
		}
	}
	return (counter);
}

static char	**ft_free_all(char **tab, size_t n)
{
	while (n >= 0)
	{
		free(tab[n]);
		n--;
	}
	free(tab);
	return (NULL);
}

char	**ft_split_str(char const *s, char c, size_t word_counter, char **tab)
{
	size_t	i_tab;
	size_t	i;

	i_tab = 0;
	i = 0;
	while (i_tab < word_counter)
	{
		while (s[i] == c)
			s++;
		if (s[i] && s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			tab[i_tab] = ft_substr(s, 0, i);
			if (!tab[i_tab] && i_tab > 0)
				return (ft_free_all(tab, i_tab));
			else if (!tab[i_tab])
				return (free(tab), NULL);
			s += i;
			i = 0;
		}
		i_tab++;
	}
	tab[i_tab] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	word_counter;

	word_counter = ft_count_word(s, c);
	tab = malloc(sizeof(char *) * (word_counter + 1));
	if (!tab)
		return (NULL);
	tab = ft_split_str(s, c, word_counter, tab);
	return (tab);
}
int	main ()
{
	char **tab = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
	int i = 0;
	while (tab[i])
		printf("%s \n", tab[i++]);

	return (0);
}
