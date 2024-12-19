/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 08:34:58 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/18 08:35:18 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstnew(void *content)
{
    t_list *ax=(t_list *)malloc(sizeof(t_list));
    if(!ax)
    return NULL;
    ax->content=content;
    ax->next=NULL;
    return ax;
}
