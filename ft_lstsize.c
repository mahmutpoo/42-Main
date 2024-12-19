/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 09:31:04 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/18 09:31:13 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_lstsize(t_list *lst)
{
    t_list *temp=lst;
    int i=0;
    while (temp != NULL)
    {
        i++;
        temp=temp->next;
    }
    return i;

}
