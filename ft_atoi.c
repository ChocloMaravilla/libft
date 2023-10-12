/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:51:23 by ruben             #+#    #+#             */
/*   Updated: 2023/10/12 18:57:57 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int ft_atoi (const char * str)
{
    // int result;
    // char *striing;
    // int temp;
    // // int limit;
    // size_t  len;
    // size_t count;

    // //limit = 50;
    // count = 0;
    // striing = (char *)str;
    // len = ft_strlen(str);
    // while(count < len - 1)
    // {
    //     result = (int) string[count];
    //     result  - limit + 2; 
    //     count++;
    // }    
    // return result;

    
}

int main()
{
    char *str = "6";
    int result;
    result = ft_atoi(str);
    printf("%i", result);
    return 0;    
}