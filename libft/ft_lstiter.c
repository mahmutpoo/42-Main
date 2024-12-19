/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 08:20:20 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/19 08:20:25 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if(!lst || !f)
    return;
    while(lst != NULL)
    {
        f(lst->content);
        lst = lst->next;
    }
}
