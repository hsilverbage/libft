/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:23:37 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/18 15:14:09 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dest, char *src, size_t destsize)
{
	unsigned long i;
	unsigned long j;

	j = 0;
	i = strlen(src);
	while (dest[j] && j < destsize)
		src[i] = dest[j];
		j++;
		i++;
	dest[j] = '\0';
	return ((i + j)-2);
}
int	main()
{
	char *dest;
	char *str = "hkdsjhf";

	printf("%lu \n", strlcat(dest, str, 3));
	printf("%lu \n", ft_strlcat(dest, str, 3));

	return (0);
}
