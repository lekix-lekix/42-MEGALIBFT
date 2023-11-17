/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kipouliq <kipouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:10:53 by kipouliq          #+#    #+#             */
/*   Updated: 2023/11/14 18:09:41 by kipouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*prev_node;

	if (!lst)
		return (NULL);
	while (lst)
	{
		prev_node = lst;
		lst = lst->next;
	}
	return (prev_node);
}
