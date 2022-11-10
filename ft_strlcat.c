/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:48:33 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/10 15:48:34 by hsilverb         ###   ########lyon.fr   */
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
