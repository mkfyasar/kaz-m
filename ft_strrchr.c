/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar@student.42kocaeli.com.tr <myasar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 00:04:23 by myasar@stud       #+#    #+#             */
/*   Updated: 2022/12/14 00:04:28 by myasar@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    char    *ptr;

    i = 0;
    ptr = 0;
    while (s[i])
    {
        if(s[i] == (char)c)
            ptr = (char *)(s + i);
        i++;
    }
    if (s[i] == (char)c)
        ptr = (char *)(s + i);
    return (ptr);
}