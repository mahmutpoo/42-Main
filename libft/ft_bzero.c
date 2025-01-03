/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 04:08:47 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/17 20:54:11 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
void ft_bzero(void *s, size_t n)
{
	size_t i=0;
	while(i <n)
	{
		((unsigned char *)s)[i]='\0';
		i++;
	}
}
