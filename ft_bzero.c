/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:15:45 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/03/27 15:15:56 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tempstr;
	size_t			i;

	tempstr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		tempstr[i] = 0;
		i++;
	}
}
/*#include <stdio.h>
int	main(void)
{
	char	b[] = "hbcwoub ";
	size_t	len = 3;

	printf("Texto original: %s\n",b);
	ft_bzero(b, len);
	printf("Texto final: %s\n", b);
	return (0);
}*/
