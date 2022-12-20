/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar@student.42kocaeli.com.tr <myasar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 00:29:14 by myasar@stud       #+#    #+#             */
/*   Updated: 2022/12/14 00:29:15 by myasar@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (!haystack || !needle)
        return (NULL);
    if (!needle || !needle[0])
        return ((char*)haystack);
    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;
        while(haystack[i + j] && needle[j] &&
                        i + j < len && haystack[i + j] == needle[j])
                j++;
        if (!needle[j])
            return ((char*)(haystack + i));
        i++;
    }
    return (NULL);
}