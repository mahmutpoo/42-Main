/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 23:27:09 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/16 23:28:48 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	if(s1 ==NULL || s2== NULL)
	return NULL;
	size_t len=ft_strlen(s1)+ft_strlen(s2);
	char *str=(char *)malloc(len+1);
	if(!str)
	return NULL;
	size_t j=0;
	while(j<len && s1[j])
	{
		str[j]=s1[j];
		j++;
	}
	size_t i=0;
	while(s2[i] && len >j)
	{
		str[j]=s2[i];
		i++;
		j++;
	}

	str[j]='\0';
	return str;
}
