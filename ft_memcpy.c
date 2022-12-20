/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar@student.42kocaeli.com.tr <myasar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 19:15:02 by myasar@stud       #+#    #+#             */
/*   Updated: 2022/12/10 19:18:15 by myasar@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
        *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    if(!dst)
            return (NULL);
    i = 0;
    while (i < n)
    {
            *(char*)(dst + i) = *(char*)(src + i);
            i++;
    }
    return (dst);
}