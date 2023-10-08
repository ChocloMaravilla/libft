/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 23:33:00 by ruben             #+#    #+#             */
/*   Updated: 2023/10/08 00:24:30 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n);
{
    while(n)
    {

        --n;
    }
}
int main()
{   
    char *str = "hola";
    char character = 'o';
    size_t len = ft_strlen(str);

    ft_memchr(str, character, len);
    printf("%s", character);
    return 0;
}