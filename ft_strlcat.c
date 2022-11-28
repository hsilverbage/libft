/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:23:37 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/28 16:46:40 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (destsize == 0)
		return (len_src);
	if (len_dest >= destsize - 1)
		return (destsize + len_src);
	while (src[i] && len_dest + 1 < destsize)
	{
		dest[len_dest] = src[i];
		i++;
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (len_dest + len_src);
}
