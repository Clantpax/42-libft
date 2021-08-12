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

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		if (*((unsigned char *)ptr + i) == (unsigned char)value)
		{
			return ((void *)ptr + i);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	//char a[] = "qwerty";
	//char c = 'e';
	printf("%s\n",(char *)ft_memchr("bonjour", 'b', 4));
}
*/