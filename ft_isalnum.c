/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar@student.42kocaeli.com.tr <myasar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:34:44 by myasar@stu        #+#    #+#             */
/*   Updated: 2022/12/13 23:20:49 by myasar@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_isalnum(char c)
{
    return ( ft_isalpha(c) || ft_isdigit(c)  );
}

/* void main()
{
    char a ;
    a = ft_isalnum('c');
    printf("%c",a);
}
*/