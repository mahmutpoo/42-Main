/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 23:56:24 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/16 02:16:31 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i=0;
	size_t srclen=0;
	while(src[srclen])
	srclen++;
	if (size == 0)
	return srclen;
	while(i<size-1 && src[i])
	{
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0';

	return srclen;
}
