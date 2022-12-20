/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar@student.42kocaeli.com.tr <myasar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:35:41 by myasar@stud       #+#    #+#             */
/*   Updated: 2022/12/10 20:19:10 by myasar@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void
        *ft_memset(void *b, int c, size_t len)
{
        size_t                  i;

        if (!b)
                return (NULL);
        i = 0;
        while (i < len)
        {
                *(unsigned char*)(b + i) = (unsigned char)c;
                i++;
        }
        return(b);
}

/*
int main()
{
        int str[] = "Akif";
        ft_memset(str, 'a', 3);
        printf("%s",str);
}
*/