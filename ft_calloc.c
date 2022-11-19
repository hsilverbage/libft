/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:23:02 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/19 17:29:20 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s1;

	s1 = malloc(sizeof (count) * (size + 1));
	if (s1 == NULL)
		return (NULL);
	while (i < count)
	{
		s1[i] = '\0';
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
