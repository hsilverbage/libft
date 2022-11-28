/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:48:43 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/28 18:40:09 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	unsigned long	len_src;
	unsigned long	i;

	if (!dest || !src)
		return (0);
	len_src = strlen(src);
	i = 0;
	if (destsize != 0)
	{
		while (src[i] != '\0' && i + 1 < destsize)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (len_src);
}
