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
	size_t count;

	c = (char)c;
	count = 0;
	while(s[count])
	{
		if(s[count] == c)
			return (char *)(s + count);
		count++;
	}
	if (!c)
		return (char *)(s + count);
	return NULL;
}
/*
int main()
{	
	char a[7] = "holaaa";
	char b;
	char *c;

	b = 'l';
	c = a;

	printf("%s", ft_strchr(c, b));
	return 0;
}*/
