/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:00:23 by hsilverb          #+#    #+#             */
/*   Updated: 2022/12/08 18:31:00 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	size_t	ft_count_words(const char *s1, char c)
{
	size_t	word_counter;
	size_t	i;

	word_counter = 0;
	i = 0;
	while (s1[i])
	{
		while (s1[i] == c && s1[i])
			i++;
		while (s1[i] != c && s1[i])
			i++;
		word_counter++;
	}
	if (s1[i - 1] == c)
		word_counter--;
	return(word_counter);
}
static	char	*ft_strndup(const char *s1, size_t n)
{
	size_t	j;
	char	*dest;

	dest = malloc(sizeof(char) * (n + 1));
	if (dest == NULL)
		return (NULL);
	j = 0;
	while (s1[j] && j < n)
	{
		dest[j] = s1[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char **ft_split(char const *s, char c)
{
	size_t	i;
	size_t	k;
	size_t	nbr_word;
	size_t	len;
	char	**tab;
	size_t	j;

	nbr_word = ft_count_words(s, c);
	i = 0;
	k = 0;
	j = 0;
	len = ft_strlen(s);
	if (!s)
	{
		tab = NULL;
		return (0);
	}
	tab = malloc(sizeof(char*) * (nbr_word + 1));
	if (!tab)
		return (NULL);
	while (s[i] == c)
		s++;
	while (s[i] && k < nbr_word)
	{
		while (s[i] != c  && s[i])
			i++;
		if (s[i] == c)
		{
			while (s[i+1] == c)
			{
				i++;
				j++;
				if (s[i] == '\0' && k == 0)
				{
					tab[k] = NULL;
					return (tab);
				}
			}
			tab[k] = ft_strndup(s, (i - j));
			while (i > 0 && len != 0)
			{
				s++;
				i--;
				len --;
			}
			s++;
			k++;
			len --;
			j = 0;
		}
	}
	if (k == nbr_word - 1)
	{
		tab[k] = ft_strndup(s, len+1);
		tab[k + 1] = NULL;
	}
	else
		tab[k] = NULL;
	return (tab);
}

int main()
{
	char	**tab = ft_split("tripouille  42 ", '\0');
	int		i;

	i = 0;
	while (tab[i] != NULL)
	{
		printf("%s \n", (tab[i]));
		i++;
	}
	return(0);
}
