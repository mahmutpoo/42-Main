/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 08:15:04 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/25 13:12:53 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i = 0;
    size_t j = 0;
    if (*needle == '\0')
	return (char *)haystack;
    while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
            j = 0;
            while (i + j < len && haystack[i + j] && needle[j] && haystack[i + j] == needle[j]) {
                j++;
            }
            if (needle[j] == '\0') {
                return (char *)&haystack[i];
            }
        }
        i++;
    }
    return NULL;

}
