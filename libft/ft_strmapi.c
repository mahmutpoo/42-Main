/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 02:43:03 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/18 02:43:13 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if(!s || !f)
    return NULL;
    int i=0;
    while(s[i])
    i++;
    char *str=(char *)malloc(sizeof(char)*i+1);
    if(!str)
    return NULL;
    i=0;
    while(s[i])
    {
        str[i]=f(i,s[i]);
        i++;
    }
    str[i]='\0';
    return str;


}
