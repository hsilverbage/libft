/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:15:57 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/10 15:52:27 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(char *haystack, char *needle, size_t len)
{
	int i;

	i = 0; 
	if(needle[i] == '\0')
		return (haystack);
	while (haystack[i] && needle[i])
	{
		while (haystack[i] == needle[i] && i < len)
		{
			i++;
			if (needle[i] == '\0')
				return (*&haystack);
		}
		haystack++;
		i = 0;
	}
	return (NULL);
}
