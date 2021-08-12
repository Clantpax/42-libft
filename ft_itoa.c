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
	if (n == 0)
		return ("0"); 
	while (i != 0 && count++ > -1)
		i /= 10;
	a = (char *)malloc(sizeof(char) * count + 1);
	if (n < 0)
	{
		a = (char *)malloc(sizeof(char) * ++count + 1);
		a[i++] = '-';
	}
	a[count] = 0;
	while (i <= --count)
	{
		a[count] = abs(n % 10) + 48;
		n /= 10;
	}
	return (a);
}

int main(void)
{
	int a = 0;
	printf("%s",ft_itoa(a));
}
