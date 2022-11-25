/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:45:35 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/25 15:58:30 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	i;

	while (*s1 && ft_strchr(set, *s1) != 0)
		s1++;
	i = ft_strlen(s1);
	while (i != 0 && ft_strchr(set, s1[i]) != 0)
		i--;
	s2 = ft_substr(s1, 0, i + 1);
	return (s2);
}
