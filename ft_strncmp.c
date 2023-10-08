/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:24:38 by ruben             #+#    #+#             */
/*   Updated: 2023/10/07 22:15:19 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{   

    size_t count;

    count = 0;
    while(count < n && (s1[count] || s2[count]))
    {
        if(!(s1[count] == s2[count]))
            return ((unsigned char)s1[count] - (unsigned char)s2[count]);
        count++;
    }
    return (0);
//     while(n)
//     {
//         if(!(s1 == s2))
//         {
//             if(s1[0] < s2[0])
//             {
//                 return (s1 - s2);   
//             } 
//             else
//             {
//                 return (s1 - s2);
//             }
//         }
//         --n;
//     }
//     return (s1 - s2);
}

// int main(void)
// {
//     char *a = "jddd";
//     char *b = "jdddd";
//     size_t c = 5;

//     printf("%d", ft_strncmp(a , b, c));
//     return 0;
// }
