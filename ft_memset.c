/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:08:51 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/03/27 15:12:31 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
/*#include <stdio.h>
int	main(void)
{
	char	b[] = "hbcwoub ";
	char	c = 'a';
	size_t	len = 3;

	printf("Texto original: %s\n",b);
	ft_memset(b, c, len);
	printf("Texto final: %s\n", b);
	return (0);
}*/
