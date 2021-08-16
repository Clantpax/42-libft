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

int	ft_strncmp(const char *str1, const char *str2, size_t count)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)str1;
	b = (unsigned char *)str2;
	while (count--)
	{
		if (*a != *b || *a == 0 || *b == 0)
			return (*a - *b);
		a++;
		b++;
	}
	return (0);
}
/*
int main(void)
{
	const char a[9] = "qwer\0t";
	const char b[9] = "qwerty";
	printf("%d",ft_strncmp(a,b,6));
	return 0;
}
*/