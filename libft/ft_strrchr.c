/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 04:42:23 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/25 12:55:31 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char *ft_strrchr(const char *s, int c)
{
    char *last_occurrence = NULL;

    while (*s)
	{
        if (*s == (char)c) {
            last_occurrence = (char *)s;
        }
        s++;
    }


    if ((char)c == '\0')
	{
        return (char *)s;
    }

    return last_occurrence;
}
