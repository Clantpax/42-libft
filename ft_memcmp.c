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

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	int		a;
	size_t	i;

	i = 0;
	while (i < num)
	{
		if (*((unsigned char *)ptr1 + i) != *((unsigned char *)ptr2 + i))
		{
			a = *((unsigned char *)ptr1 + i) - *((unsigned char *)ptr2 + i);
			return (a);
		}
		i++;
	}
	return (0);
}
/*
int main ()
{
	char buffer2[] = "DWg";
	char buffer1[] = "DWG";

	printf ("%d",ft_memcmp ( buffer1, buffer2, 3 ));
	return 0;
}
*/