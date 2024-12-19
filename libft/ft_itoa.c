/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 23:13:03 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/20 02:21:10 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_number(int n,int count)
{


    if(n>9)
    return count_number(n/10,count+1);
    return count;

}
char *ft_itoa(int n)
{
    if(n == -2147483648)
    {
        return ft_strdup("-2147483648");

    }
    int sign =1;
    int count=0;
    char *str;
  
    if( n< 0)
    {
        sign=-1;
        n= n*sign;
    }
    count =count_number(n,1);
    if(sign == -1)
    {
        str=(char *)malloc(sizeof(char)*count+2);
        if (!str)
        {
            return NULL;
        }
        str[0]='-';
        str[count+1]='\0';
        while(count >0)
        {

            str[count]=n%10+'0';
            n = n/10;
            count--;
        }
        return str;
    }

    else
    {

    str=(char *)malloc(sizeof(char)*count+1);
    if (!str)
    {
    return NULL;
    }
    str[count] ='\0';
    count--;
       while(count >=0)
        {

            str[count]= n % 10+'0';
            n = n/10;
            count--;
        }
        return str;
    }
}
