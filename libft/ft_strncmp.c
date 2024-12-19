/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 04:56:59 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/16 10:43:35 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;

    while (i < n && s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        i++;
    }

    if (i < n)
        return (unsigned char)s1[i] - (unsigned char)s2[i];

    return 0;
}
