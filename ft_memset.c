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

void	*ft_memset(void *str, int dash, size_t num)
{
	size_t	i;
	char	*a;

	a = str;
	i = 0;
	while (i < num)
	{
		a[i] = dash;
		i++;
	}
	return (a);
}
/*
int main(void)
{
	char str[] = "trash carl";
	ft_memset(str, 'a', 5);
	printf("%s\n",str);
	memset(str,'a',5);
	printf("%s\n",str);
	return 0;
}
*/