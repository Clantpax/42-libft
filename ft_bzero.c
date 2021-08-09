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

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*a;

	a = s;
	i = 0;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}
/*
int main(void)
{
	char str_1[] = "bad carl";
	char str_2[] = "bad carl";
	int i = 4;
	ft_bzero(str_1,4);
	while (str_1[i])
	{
		printf("%d\n",str_1[i]);
		i++;
	}
	i = 4;
	bzero(str_2,4);
	while (str_2[i])
	{
		printf("%d\n",str_2[i]);
		i++;
	}
	return 0;
}
*/