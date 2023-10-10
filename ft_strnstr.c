/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:03:50 by ruben             #+#    #+#             */
/*   Updated: 2023/10/10 16:52:04 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t count;

    // little = (char *)little;
    // big = (char *)big;
    count = 0;
    while(count < len && little[count])
    {
        if(big[count] == little[count] && !(little[count] == '\0'))
            return (char *)little;
        
        count++;
    }
    if(!little)
        return (char *)big; 
    return NULL;
}

int main()
{
    char *str = "Buenos dias";
    char *cha = "di";
    char *result;
    size_t len = ft_strlen(str);
    
    result = ft_strnstr(str, cha, len);
    printf("%s", result);
    return 0;    
}