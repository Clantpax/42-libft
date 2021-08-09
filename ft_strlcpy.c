/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: payong <payong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:13:57 by payong            #+#    #+#             */
/*   Updated: 2021/08/07 17:13:57 by payong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		i;
	char		*a;
	const char	*b;

	i = 0;
	a = dest;
	b = src;
	while (i < size)
	{
		a[i] = b[i];
		i++;
	}
	return (i - 1);
}
/*
int main(void)
{
	char str1[] = "blue";
	char str2[] = "black";

	printf("%ld\n",ft_strlcpy(str1, str2, sizeof(str2)));
	printf("%s\n",str1);
	return (0);
}
*/