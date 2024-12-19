/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 04:42:23 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/20 02:17:41 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char *ft_strrchr(const char *s, int c)
{
	int i=0;
	while(s[i])
	i++;
	if(c=='\0')
	return (char *)&s[i];
	while(i >=0)
	{
		if(s[i]== c)
		return (char *)&s[i];
		i--;
	}
	return NULL;

}
