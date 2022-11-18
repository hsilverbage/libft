/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:05:06 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/18 19:13:00 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void s2, size_t n)
{
	size_t i;

	i = 0;
	while((s1 || s2) && i < n)
	{
		if(s1[i] == s2[i])
			i++;
		else
			return(s2[i] - s1[i])
	}
	return(s2[i] - s1[i])
}
int	main()
{
	const void s1 = "falut";
	const void s2 = "falut";
	size_t n = 5;

	printf("%d \n", ft_memcmp(s1, s2,n));
	printf("%d \n", memcmp(s1, s2, n));

	return(0);
}
