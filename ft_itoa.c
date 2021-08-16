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

char	*ft_itoa(int n)
{
	int		i;
	int		count;
	char	*a;

	i = n;
	count = 0;
	if (i == 0)
		count++;
	while (i != 0 && count++ > -1)
		i = i / 10;
	a = (char *)malloc(sizeof(char) * (count + 1));
	if (!a)
		return (0);
	if (n < 0)
	{
		a = (char *)malloc(sizeof(char) * (++count + 1));
		a[i++] = '-';
	}
	a[count--] = 0;
	while (i - 1 < count)
	{
		a[count--] = abs(n % 10) + '0';
		n = n / 10;
	}
	return (a);
}
/*
int main(void)
{
	int a = 5;
	printf("%s",ft_itoa(a));
}
*/