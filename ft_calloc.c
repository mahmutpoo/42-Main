/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:39:57 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/16 11:21:41 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

 void *ft_calloc(size_t nmemb, size_t size)
 {
	void *ptr=malloc(size * nmemb);
	if(!ptr)
	return NULL;
	ft_bzero(ptr,nmemb * size);
	return ptr;

 }
