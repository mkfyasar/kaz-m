/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar@student.42kocaeli.com.tr <myasar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:13:47 by myasar@stud       #+#    #+#             */
/*   Updated: 2022/12/10 22:13:48 by myasar@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t dest_lenght;
    size_t src_lenght;

    src_lenght = ft_strlen(src);
    dest_lenght = ft_strlen(dst);
    j = dest_lenght;
    i = 0;
    if(dest_lenght < size - 1 && size > 0)
    {
        while(src[i] && dest_lenght + i < size - 1)
        {
            dst[j] = src[i];
            j++;
            i++;
        }
        dst[j] = 0;
    }
    if(dest_lenght >= size)
        dest_lenght = size;
    return (dest_lenght + src_lenght);
}

