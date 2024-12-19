/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 08:14:28 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/19 08:14:36 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void *))
{
    if(*lst == NULL|| del ==NULL )
    return;
    t_list *temp=*lst;
    t_list *iter=*lst;
    while(iter != NULL)
    {
        iter=temp->next;
        del(temp->content);
        free(temp);
        temp=iter;
    }
   *lst=NULL;
}
