/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 22:45:22 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/20 02:18:26 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	if(s == NULL)
	return NULL;
	char *str;
	size_t i=0;
	size_t j=ft_strlen(s);
	str=(char *)malloc(sizeof(char)*len+1);
	if (str == NULL)
    return NULL;
	while(i<len && s[start] && j>start)
	{
		str[i]=s[start];
		i++;
		start++;
	}
	str[i]='\0';

	return str;
}
