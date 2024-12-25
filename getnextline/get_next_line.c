/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 09:56:24 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/25 09:56:25 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*satir_yazdir(char *kalan)
{
	int i=0;
	char *str;
	if(!kalan[i])
	return NULL;
	while(kalan[i] && kalan[i] != '\n')
	i++;
	str=(char *)malloc(sizeof(char)*i+2);
	if(!str)
	return NULL;
	i=0;
	while(kalan[i] && kalan[i] != '\n')
	{
	str[i]=kalan[i];
	i++;
	}
	if(kalan[i] =='\n')
	{
	str[i]=kalan[i];
	i++;
	}
	str[i]='\0';
	return str;
}

char	*kalan_yazdir(char *kalan)
{
	char *str;
	int i=0;
	int j=0;
	while(kalan[i] && kalan[i] != '\n')
	i++;
	if(!kalan[i])
	{
		free(kalan);
		return NULL;
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(kalan) - i + 1));
	if(!str)
	return NULL;
	i++;
	while(kalan[i])
	str[j++]=kalan[i++];
	str[j]='\0';
	free(kalan);
	return str;
}

char *satir_oku(int fd,char *str)
{
	char *buff;
	buff=(char *)malloc(1+BUFFER_SIZE);
	int rdbyte=1;
	if(!buff)
	return NULL;
	while(!ft_strchr(str,'\n')&& rdbyte != 0 )
	{
		rdbyte=read(fd,buff,rdbyte);
		if(rdbyte== -1)
		{
			free(buff);
			return NULL;
		}
		buff[rdbyte]='\0';
		str=ft_strjoin(str,buff);
	}
	free(buff);
	return str;
}


char	*get_next_line(int fd)
{
	char		*str;
	static char	*kalan;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	kalan = satir_oku(fd, kalan);
	if (!kalan)
		return (NULL);
	str = satir_yazdir(kalan);
	kalan = kalan_yazdir(kalan);
	return (str);
}

