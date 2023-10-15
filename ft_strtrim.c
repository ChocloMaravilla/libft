/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruben <ruben@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:45:10 by ruben             #+#    #+#             */
/*   Updated: 2023/10/15 13:25:28 by ruben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int char_in_set(char c, char const *set)
{
    while (*set)
    {
        if (c == *set)
            return (1);
        set++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start = 0;
    while (char_in_set(s1[start], set))
        start++;
    size_t end = ft_strlen(s1) - 1;
    while (end > start && char_in_set(s1[end], set))
        end--;
    return ft_substr(s1, start, end - start + 1);
}

// int main()
// {
//     char *a = "cbaabcccccbbab";
//     char *b = "abc";
//     printf("%s",ft_strtrim(a, b));
//     return 0;    
// }