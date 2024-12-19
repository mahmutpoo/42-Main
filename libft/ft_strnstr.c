/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 08:15:04 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/16 08:15:05 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{

	if(*needle=='\0')
	return (char*) haystack;
	size_t i=0;
	size_t j=0;
	size_t n=0;
	while(i<len && haystack[i])
	{
		n=i;
		while((needle[j] ==haystack[i]) && needle[j] && haystack[i])
		{
			j++;
			i++;
		}
		if(needle[j]=='\0')
		return (char *)&haystack[n];
		j=0;
		i++;
	}
	return NULL;

}
