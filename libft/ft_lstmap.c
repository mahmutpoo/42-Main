/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 08:53:58 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/19 08:54:07 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    if(!lst || !f )
    return NULL;
    t_list *temp=NULL;
    t_list *ax=NULL;
    while(lst != NULL)
    {
        temp=ft_lstnew(f(lst->content));
        if(!temp)
        {
        ft_lstclear(&ax,del);
        return NULL;
        }
        ft_lstadd_back(&ax,temp);
        lst= lst->next;
    }
    return ax;
}
