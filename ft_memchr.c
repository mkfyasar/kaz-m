/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar@student.42kocaeli.com.tr <myasar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 00:15:16 by myasar@stud       #+#    #+#             */
/*   Updated: 2022/12/20 18:56:59 by myasar@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    int i ;

    i = 0;
    str = (unsigned char *)s;
    if (n == 0)
        return (0);
    while (n-- > 0)
    {
        if (str[i] == (unsigned char)c)
            return ((void *)s + i);
        i++;
    }
    if (c == '\0')
        return ((void *)s + i);
    return (NULL);
    ee
}