/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar@student.42kocaeli.com.tr <myasar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 21:59:35 by myasar@stud       #+#    #+#             */
/*   Updated: 2022/12/10 22:04:13 by myasar@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    if(size>0)
    {
        while(src[i] && i < (size - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = 0;
    }
    while(src[i])
        i++;
    return (i);
}
