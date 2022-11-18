/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:23:11 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/16 17:00:31 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*	ft_memset(void *b, int c, size_t len)
{
	char *str;
	unsigned long int i;

	i = 0;
	str = b;

	while(i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return(b);
}
