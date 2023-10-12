/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:51:23 by ruben             #+#    #+#             */
/*   Updated: 2023/10/12 23:01:27 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int ft_atoi (const char *str)
{
    int a;
    int nb;
    int sign;

    sign = 1;
    a = 0;
    nb = 0;
    
    if(str[a] == ' ' || str[a] == '\n' || str[a] == '\t' || str[a] == '\r' || str[a] == '\f' || str[a] == '\v')
        a++;
    if(str[a] == '-')
        {sign = -1;
        a++;
        }
    if (str[a] == '+')
        a++;
    while(str[a] != '\0')
    {
        nb = (nb * 10) + (str[a] - '0');
        a++;    
    }
    return (nb * sign);
}

// int main()
// {
//     char *str = "7-2";
//     int result = ft_atoi(str);
//     printf("%d", result);
//     return 0;    
// }