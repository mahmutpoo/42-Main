/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:39:57 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/25 12:58:36 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t total_size;
    void *ptr;

    total_size = nmemb * size;
    if (nmemb != 0 && total_size / nmemb != size)
	return NULL;
    ptr = malloc(total_size);
    if (!ptr)
	return NULL;
    ft_memset(ptr, 0, total_size);

    return ptr;
}
