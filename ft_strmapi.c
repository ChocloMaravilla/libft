/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:28:47 by ruben             #+#    #+#             */
/*   Updated: 2023/10/15 13:51:13 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    
    if (!s)
        return (0);
    char *new_s = malloc(ft_strlen(s) + 1);
    if (!new_s)
        return (0);
    i = 0;
    while (s[i])
    {
        new_s[i] = f(i, s[i]);
        i++;
    }
    new_s[i] = '\0';
    return (new_s);
}

// static char test_func(unsigned int n, char c)
// {
//     if (n % 2 == 0)
//         return ft_toupper(c);
//     return ft_tolower(c);
// }
// int main()
// {
//     char *a = "aaaaholaaaaa";
    
//     printf("%s" ,ft_strmapi(a, &test_func));
    
//     return (0);
// }