/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:53:38 by ruben             #+#    #+#             */
/*   Updated: 2023/10/20 20:00:00 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t len;
    c = (char)c;
    
    // if(*s == '\0')
    //     return (NULL);
    len = ft_strlen(s);
    if (!c)
        return ((char *)&s[len]);
    while (s[len] != c)
    {
        if (len <= 0)
            return (NULL);
        len--;
}
    return ((char *)&s[len]);
    
   // if(s[0] == c)
        // return (char *)s;
    
    //return NULL;
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
}

string = ḧello

1. we go to end of string (with ft_strlen)
2. while we do not find c in string, we keep going back
3. if we reach the beginning, we return NULL
4. if not (and we find our first char), we return a pointer to the position we found it.


*/



