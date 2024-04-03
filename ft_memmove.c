/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:59:56 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/03/29 13:37:22 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	i = 0;
	if (dst < src)
	{
		while (len--)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (dst > src)
	{
		i = len -1;
		while (len--)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dst);
}
/*#include <stdio.h>
int	main(void)
{
	char	src[] = "Hola mundo";
	char	dest[] = "Adios mundo";
	ft_memmove(dest, src, sizeof(src));
	printf("%s", dest);
	return (0);
}*/
