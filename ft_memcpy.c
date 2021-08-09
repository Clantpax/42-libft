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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*a;
	const char	*b;

	i = 0;
	a = dest;
	b = src;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	//char str2[4] = "blue";  
	char str1[50] = "black";  
  
	ft_memcpy (str1, str1 + 2, 3);
	printf("%s\n",str1);
	return 0;
}
*/