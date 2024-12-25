/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 22:45:22 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/25 13:08:31 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char *ft_substr(char const *s, unsigned int start, size_t len) {
    char *str;
    size_t i = 0;
    size_t s_len;

    if (!s)
        return NULL;

    s_len = ft_strlen(s);

    if (start >= s_len)
        return ft_strdup("");

    if (len > s_len - start)
        len = s_len - start;

    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return NULL;
    while (i < len && s[start])
	 {
        str[i++] = s[start++];
    }
    str[i] = '\0';

    return str;
}
