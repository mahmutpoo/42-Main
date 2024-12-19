/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 07:36:54 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/16 07:37:04 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *a1 = (const unsigned char *)s1;
    const unsigned char *a2 = (const unsigned char *)s2;
    size_t i = 0;

    while (i < n)
    {
        if (a1[i] != a2[i])
            return (int)(a1[i] - a2[i]);
        i++;
    }
    return 0;
}
