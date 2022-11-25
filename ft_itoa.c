/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:41:52 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/25 16:21:15 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len_n(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		n *= -1;
	while (n > 1)
	{
		n = n / 10;
		len++;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;

	i = 0;
	if (n < 0)
		i ++;
	i += ft_len_n(n);
	str = malloc(sizeof(char) * (i + 1));
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	i--;
	while (n > 1)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	str[i] = n + 48;
	return (str);
}
