/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:25:07 by hsilverb          #+#    #+#             */
/*   Updated: 2022/12/27 18:26:07 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (tab);
}

static	char	*ft_strndup(const char *s1, size_t n)
{
	size_t	j;
	char	*dest;

	dest = malloc(sizeof(char) * (n + 1));
	if (!dest)
		return (NULL);
	j = 0;
	while (j < n && s1[j])
	{
		dest[j] = s1[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
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
		while (s[i] && s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			tab[i_tab] = ft_strndup(s, i);
			if (!tab[i_tab])
				return (ft_free_all(tab, i_tab));
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
