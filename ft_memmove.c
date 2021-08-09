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

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	char		*lastd;
	const char	*lasts;

	d = dest;
	s = src;
	if (d < s)
	{
		while (len--)
			*d-- = *s--;
	}
	else
	{
		lasts = s + (len - 1);
		lastd = d + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
/*
int main(void)
{
	char str2[100] = "hello";
	char str3[100] = "llo";
    char *second;
    second = str2;
    printf("Original string :%s\n ", str2);
 
    // when overlap it start from first position
    memmove(second, str3, 3);
    printf("memmove overlap : %s\n", str2);
}
*/