/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:41:52 by hsilverb          #+#    #+#             */
/*   Updated: 2022/11/21 16:17:16 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_len_n(int n)
{
	size_t len;

	len = 0;
	while  (n > 1)
	{
		n = n / 10;
		len++;
	}
	return (len + 1);
}
char *ft_itoa(int n)
{
	char *str;
	size_t i;
	size_t result;
	char neg;

	i = 0;
	result = 0;
	if (n < 0)
		result ++;
	result += ft_len_n(n);
	str = malloc(sizeof(char) * (result + 1));
	if (n < 0)
	{
		str[i] = '-';
		i++;
		n *= -1;
	}
	if (str == NULL)
		return (NULL);
	while (n > 1)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	str[i] = n + 48;
	str[i + 1] = '\0';
	return (str);
}
int	main()
{
	int n = -123456;
	char *str;

	str = ft_itoa(n);

	printf("%s \n", str);

	return (0);
}
