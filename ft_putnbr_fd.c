/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 08:19:31 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/20 02:22:08 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
 void ft_putnbr_fd(int n, int fd)
 {
    char c;
    if(n == -2147483648)
    {
       write(fd, "-2147483648", 11);
       return;
    }
    if(n <0)
    {
        write(fd,"-",1);
        n = n*-1;
    }

    if(n>9)
    ft_putnbr_fd(n/10,fd);
    c='0'+n%10;
    write(fd,&c,1);

 }
