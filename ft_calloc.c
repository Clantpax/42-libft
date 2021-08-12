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

void	*ft_calloc(size_t element, size_t size)
{
	char	*a;
	size_t	i;
	size_t	j;

	i = element * size;
	j = 0;
	a = (char *)malloc(i);
	while (j < i)
	{
		a[j] = 0;
		j++;
	}
	return ((void *)a);
}
/*
int main(void)
{
	int i, * ptr, sum = 0;
    ptr = ft_calloc(10, sizeof(int));
    if (ptr == NULL)
	{
        printf("Error! memory not allocated.");
        exit(0);
    }
    for (i = 0; i < 10; ++i)
	{
		*(ptr + i) = i;
        sum += *(ptr + i);
    }
    printf("Sum = %d", sum);
    free(ptr);
    return 0;
}
*/