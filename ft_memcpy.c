/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 04:18:03 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/12 04:24:03 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
	return (0);
	if (dest == src)
	return (dest);
	size_t i=0;
	while(i<n-1)
	{
		((unsigned char *)dest)[i]=((unsigned char *)src)[i];
		i++;
	}
	return dest;
}
