/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:48:43 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/19 17:38:00 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	while (src[i] && i < destsize)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i + 1);
}
