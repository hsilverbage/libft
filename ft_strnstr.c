/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:15:57 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/28 19:47:33 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	k = 0;
	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while ((haystack[i] && needle[i]))
	{
		while (haystack[i] == needle[i] && i < len)
		{
			i++;
			k++;
			if (needle[i] == '\0')
				return ((char *)haystack);
		}
		haystack++;
		i = 0;
	}
	return (NULL);
}
