/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:23:37 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/15 17:41:09 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_strlcat(char *dest, char *src, size_t destsize)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (dest[j] && j < destsize)
		j++;
	return (i + j);
}
