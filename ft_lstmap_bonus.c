/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thvanher <thvanher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 10:50:01 by thvanher          #+#    #+#             */
/*   Updated: 2020/08/11 10:50:22 by thvanher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *actual_lst;
	t_list *actual_res;
	t_list *res;

	actual_lst = lst;
	if (!lst)
		return (0);
	if (!(res = ft_lstnew((*f)(actual_lst->content))))
		return (0);
	actual_lst = lst->next;
	actual_res = res;
	while (actual_lst)
	{
		if (!(actual_res->next = ft_lstnew((*f)(actual_lst->content))))
		{
			ft_lstclear(&res, del);
			return (0);
		}
		actual_res = actual_res->next;
		actual_lst = actual_lst->next;
	}
	return (res);
}
