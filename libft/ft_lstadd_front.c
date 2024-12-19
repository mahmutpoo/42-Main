/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 09:25:06 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/18 09:26:21 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_front(t_list **lst, t_list *new)
{
    t_list *temp=*lst;
    if(!*lst | !new)
    return;
    new->next=temp;
    *lst=new;
    return;
}
