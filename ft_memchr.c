/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:48:45 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/18 19:03:30 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memchr(void *str, int c, size_t n)
{
	size_t i;
	char *char_str;

	char_str = (char *) str;
	i = 0;

	while(char_str[i] && i < n)
	{
		if(char_str[i] == c)
			return(&str[i]);
		i++;
	}
	return(NULL);
}
