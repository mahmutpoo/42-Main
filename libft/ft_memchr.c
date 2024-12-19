/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 06:03:07 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/16 06:03:22 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	char *a=(char *)s;
	size_t i=0;
	while(i<n)
	{
		if(a[i]==(unsigned char)c)
		return (void *)&a[i];
		i++;
	}
	return NULL;
}
