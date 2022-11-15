/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:23:11 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/15 17:39:23 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*	ft_memset(void *b, int c, size_t len)
{
	int i;

	i = 0;

	while(i < len)
	{
		b[i] = c;
		i++;
	}
	return(b)
}
