/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:12:50 by ruben             #+#    #+#             */
/*   Updated: 2023/10/22 01:12:53 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    char *a;
    int i;
    int aux;

    aux = n;
    a_function(n, aux);
    a = (char *)malloc((i + 1) * sizeof(char));
    if(!a)
        return 0; 
    if (aux < 0)
    {
        a[0] = '-';
        aux *= -1;
        n = 1;
    }
    a[i] = '\0';  
  
    while(i > n)
    {
        i--;
        if(aux > 0)
        {
            a[i] = (aux % 10) + '0';
            aux = aux / 10;
        }
        else
        {
            a[i] = (aux % 10 * -1) + '0';
            aux = aux / 10;
        }
        
    }
    return a; 
}
int a_function(int n, int aux)
{
    int i;

    i = 0; 
    if(n == 0)
        return ("0");
    while(n != 0)
    {
        n = n / 10;
        i++;
    }
    if (aux < 0)
        i++;
    return i;
}
// int main()
// {
//     int n = -2147483648;
//     return 0;
// }