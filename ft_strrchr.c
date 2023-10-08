/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:53:38 by ruben             #+#    #+#             */
/*   Updated: 2023/10/07 19:54:32 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t len;
    c = (char)c;
    
    len = ft_strlen(s);
    if(s[0] == '\0'|| !s)
        return NULL;
    if (!c)
        return ((char *)&s[len]);
    while (len - 1 > 0)
    {
        if (s[len] == c)
            return ((char *)&s[len]);
        len--;
    }
    if(s[0] == c)
        return (char *)s;
    
    return NULL;
}
/*
int main()
{
    char a[9] = "holalaaa";
    char b;
    char *c;

    b = 'l';
    c = a;

    printf("%s", ft_strrchr(c, b));
    return 0;
}*/
