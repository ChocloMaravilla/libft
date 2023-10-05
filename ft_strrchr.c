/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:53:38 by ruben             #+#    #+#             */
/*   Updated: 2023/10/05 19:47:09 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t len;
    c = (char)c;
    len = 0;
    // len = ft_strlen(s);
    while (s[len])
        len++;

    while (s[len] > 0)
    {
        if (s[len] == c)
            return ((char *)&s[len]);
        len--;
    }
    if (!c)
        return ((char *)&s[len]);
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

    printf("%s", ft_strrchr(c, b));
    return 0;
}*/