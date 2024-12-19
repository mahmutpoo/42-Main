/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 09:35:20 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/16 10:44:55 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int ft_atoi(const char *str)
{
	int i=0;
	int sign=1;
	int result=0;
	while((str[i] >= 9 && str[i] <= 13 )|| str[i] == 32)
	i++;
	if(str[i]=='-')
	sign = -1;
	if(str[i]=='-' || str[i] == '+')
	i++;
	while((str[i] >='0' && str[i] <= '9') && str[i])
	{
		result = result *10+(str[i]-'0');
		i++;
	}
	return(sign* result);
}
