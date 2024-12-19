/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:53:07 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/16 19:53:16 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
char *ft_strdup(const char *s1)
{
	int i=0;
	char *s2;

	while(s1[i])
	i++;

	s2=(char *)malloc((sizeof(char)*i)+1);
	i=0;
	if(s2==NULL)
	return NULL;
	while(s1[i])
	{
		s2[i]=s1[i];
		i++;
	}
	s2[i]='\0';
	return s2;
}
