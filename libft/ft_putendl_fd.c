/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 08:03:04 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/20 02:22:24 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
void ft_putendl_fd(char *s, int fd)
{
    char c='\n';
    if(!s)
    return ;
    int i=0;
    while(s[i])
    {
        write(fd,&s[i],1);
       i++;
    }
    write(fd,&c,1);
}
