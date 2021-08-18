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

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while ((*lst)->next)
		*lst = (*lst)->next;
	(*lst)->next = new;
}
/*
int main()
{
	char *str = "testr";
	char *str2 = "aaaaa";
	t_list *lst = ft_lstnew(str);
	t_list *lst2 = ft_lstnew(str2);
	printf("%s\n", (char *)lst->content);
	printf("%s\n\n", (char *)lst2->content);
	ft_lstadd_back(&lst, lst2);
	printf("%s\n", (char *)lst->content);
	lst = lst->next;
	printf("%s\n", (char *)lst->content);
}
*/