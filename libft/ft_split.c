/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:47:07 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/25 13:04:07 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static int word_count(char const *s, char c) {
    int i = 0;
    int count = 0;

    while (s[i]) {
        while (s[i] && s[i] == c)
            i++;
        if (s[i]) {
            count++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    return count;
}

static char *malloc_word(char const *s, char c) {
    int i = 0;
    char *str;

    while (s[i] && s[i] != c)
        i++;
    str = (char *)malloc(i + 1);
    if (!str)
        return NULL;

    i = 0;
    while (s[i] && s[i] != c) {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return str;
}

char **ft_split(char const *s, char c) {
    if (!s)
        return NULL;

    char **result;
    int i = 0, j = 0;

    result = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
    if (!result)
        return NULL;

    while (s[i]) {
        while (s[i] && s[i] == c)
            i++;
        if (s[i]) {
            result[j++] = malloc_word(&s[i], c);
            if (!result[j - 1]) {
                while (j > 0)
                    free(result[--j]);
                free(result);
                return NULL;
            }
            while (s[i] && s[i] != c)
                i++;
        }
    }
    result[j] = NULL;
    return result;
}
