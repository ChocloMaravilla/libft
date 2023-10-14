/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 03:08:50 by ruben             #+#    #+#             */
/*   Updated: 2023/10/14 14:36:07 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  i;
    size_t  s1len;
    size_t  s2len;
    char *con;
    
    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);
    con = malloc((sizeof(char))*((s1len + s2len + 1)));
    if(!con)
        return NULL;
    i = 0;
    while(i <= s1len)
    {
        con[i] = s1[i];
        i++;
    }
    i = 0;
    while (i <= s2len)
    {
        con[i + s1len] = s2[i];
        i++;
    }
    con[i + s1len] = '\0';
    return con;
}

// int main()
// {
//     char *a = "hola";
//     char *b = "Caracola";
//     printf("%s", ft_strjoin(a, b));
//     return 0;   
// }