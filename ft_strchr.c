/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:10:53 by ruben             #+#    #+#             */
/*   Updated: 2023/10/02 20:10:54 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{

	char *b;
	int count;
	size_t len;
	size_t lenC;

	lenC = (size_t)c;
	len = ft_strlen(s);
	count = 0;
	b = (char *)s;
	if(!s || !c || lenC > len || lenC < len )
		return NULL;
	while(s != '\0')
	{
		if(b == NULL)
		{
			return NULL;
		}
		count++;
	}
	return b;
}
int main()
{	
	char *a;
	char b;
	char *c;

	a = "holaaa";
	b = 'l';
	c = a;

	ft_strchr(c, b);
	printf("%s", a);
	return 0;
}
