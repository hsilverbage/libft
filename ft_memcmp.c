/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:05:06 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/19 17:39:29 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*cast_s1;
	char	*cast_s2;

	cast_s1 = (char *)s1;
	cast_s2 = (char *)s2;
	i = 0;
	while ((s1 || s2) && i < n)
	{
		if (cast_s1[i] == cast_s2[i])
			i++;
		else
			return (cast_s1[i] - cast_s2[i]);
	}
	return (cast_s1[i] - cast_s2[i]);
}
