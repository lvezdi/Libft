/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:48:29 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/03/27 15:13:32 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = strlen(src);
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*#include <stdio.h>
int	main(void)
{
	char src[] = "Buenos dias";
	char dst [20];
	size_t	len = ft_strlcpy (dst, src, sizeof(dst));
	printf("Texto final: %s\n", dst);
	printf("Cantidad copiada: %zu\n", len);
	return (0);
}*/
