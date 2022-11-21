/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:45:35 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/21 15:21:38 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_set(const char *s1, const char *set, int i)
{
	int j;

	j = 0;
	while (s1[i] == set[j])
	{
		if (set[j] == '\0')
			return(1);
		else
		{
			i++;
			j++;
		}
	}
	return(0);
}
char *ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		test;
	char	trimed[100];

	i = 0;
	j = 0;
	k = 0;
	test = ft_check_set(s1, set, i);
	while (s1[i])
	{
		if (s1[i] == set[j])
		{
			if (test == 0)
				i++;
			else if (test == 1)
			{
				trimed[k] = s1[i];
				k++;
				i++;
			}
		}
		else
		{
			trimed[k] = s1[i];
			k++;
			i++;
		}
	}
	trimed[k] = '\0';
	return (trimed);
}
int	main()
{
	const char *s1 = "falut fa va ?";
	const char *set = "fa";

	char *trimed = ft_strtrim(s1, set);
	printf("%s \n", trimed);
	return(0);
}
