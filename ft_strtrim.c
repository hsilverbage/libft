/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:45:35 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/19 17:59:19 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*trimed;

	i = 0;
	j = 0;
	k = 0;
	while (s1)
	{
		if (s1[i] != set[j])
		{
			trimed[k] = s1[i];
			k++;
			i++;
		}
		while (s1[i] == set[j])
		{
			if (set[j])
				i++;
			else if (set[j] != '\0' && s1[i] != set[j])
			{
				trimed[k] = s1[i];
				k++;
				i++;
			}
		}
	}
	return (trimed);
}
int	main()
{
	char *s1 = "falut fa va ?";
	char *set = "fa";

	char *trimed = ft_strtrim(s1, set);
	printf("%s \n", trimed);
	return(0);
}
