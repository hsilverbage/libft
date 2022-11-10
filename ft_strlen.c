/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:49:06 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/10 15:49:07 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int i;

	i = 0;

	while(str[i])
		i++;
	return (i);
}

int ft_strlen(char *str)
{
	char *tmp;

	tmp = str;
	while (str && *str)
		str++;
	return (tmp - str);
}
