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

t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	int	j;

	if (!lst)
		return (lst);
	i = 0;
	j = ft_lstsize(lst) - 1;
	while (i < j)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
/*
int main()
{
	char *str = "testr";
	char *str2 = "aaaaa";
	t_list *lst = ft_lstnew(str);
	t_list *lst2 = ft_lstnew(str2);
	t_list *lst4;
	ft_lstadd_front(&lst2, lst);
	printf("%s\n", (char *)lst2->content);
	printf("%s\n", (char *)lst2->next->content);
	lst4 = ft_lstlast(lst2);
	printf("%s\n", (char *)lst4->content);
}
*/