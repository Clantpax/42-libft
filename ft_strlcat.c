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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*a;
	const char	*b;
	size_t		i;
	size_t		j;

	j = ft_strlen(dest);
	a = dest;
	b = src;
	i = 0;
	while (j + i < size - 1)
		a[j + i++] = *src++;
	a[j + i] = 0;
	if (size < j)
		return (size + ft_strlen(b));
	return (j + ft_strlen(b));
}
/*
int main(void)
{
	char a[500] = "jelly";
	char b[500] = "bean";

	printf("Mine    : %ld\n", ft_strlcat(a, b, 9));
	printf("Mine    : %s\n", a);
	return (0);
}
*/