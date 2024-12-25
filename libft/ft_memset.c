/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 03:42:29 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/25 12:31:54 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void *ft_memset(void *b, int c, size_t len)
{
	if(!b)
	return NULL;
 size_t i=0;
 while(i<len)
 {
	((unsigned char *)b)[i]= c;
	i++;
 }

 return b;

}

