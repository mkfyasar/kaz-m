/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar@student.42kocaeli.com.tr <myasar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 21:10:41 by myasar@stud       #+#    #+#             */
/*   Updated: 2022/12/10 21:11:57 by myasar@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
        *ft_memmove(void *dst, const void *src, size_t len)
{
    int i;

    if(!dst || !src)
            return (NULL);
    if(dst > src)
    {
        i = (int)len-1;
        while(i >= 0)
        {
            *(char*)(dst + i) = *(char*)(src + i);
            i--;
        }
    }
    else
    {
        i = 0;
        while (i < (int)len)
        {
            *(char*)(dst + i) = *(char*)(src + i);
            i++;
        }
    }
    return (dst);
}