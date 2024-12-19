/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 01:26:43 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/19 01:26:53 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp= *lst;
    if(!new )
    return ;
    if (*lst == NULL)
    {
        *lst = new;
        return;
    }
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=new;

}
