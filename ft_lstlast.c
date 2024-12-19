/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 00:54:53 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/19 00:55:20 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{
    if(!lst)
    return NULL;

    t_list *temp=lst;
    while (temp->next)
    temp=temp->next;
    return temp;

}
