/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 04:31:31 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/17 20:43:02 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char *ft_strchr(const char *s, int c)
{
	int i=0;
	while(s[i])
	{
		if(s[i]== c)
		return (char *)&s[i];
		i++;
	}
	if (c == '\0')
	 return (char *)&s[i];
	return NULL;
}
