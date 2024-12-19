/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 23:32:43 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/16 04:16:55 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;

    if (d == s || n == 0)
        return dest;

    if (d < s)
    {
        while (n--)
            *d++ = *s++;
    }
    else
    {
        d += n;
        s += n;
        while (n--)
            *(--d) = *(--s);
    }

    return dest;
}

