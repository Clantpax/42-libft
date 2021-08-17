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

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (*(s + i) != 0)
	{
		if (*(s + i) == (char *)c)
			return ((char *)s + i);
		i++;
	}
	if (*(s + i) == (char *)c)
		return ((char *)s + i);
	return (0);
}
/*
int main(void)
{
	char a[999] = "swegway";
	char c = '\0';
	printf("%p\n",ft_strchr(a,c));
	printf("%p\n",strchr(a,c));
	return 0;
}
*/