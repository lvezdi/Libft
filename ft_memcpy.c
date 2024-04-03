/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:01:46 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/03/29 13:15:25 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	i = 0;
	if (!d && !s)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*#include <stdio.h>
int main(void)
{
    char    src [] = "mem";
    char    dst [] = "zyxwvutsrqponmlkjihgfedcba";
    size_t  len = 14;

    printf("Texto original: %s\n", src);
    ft_memcpy(src, dst, len);
    dst[len] = '\0';
    printf("Texto final: %s\n", dst);
    return (0);
}*/
