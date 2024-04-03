/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:31:41 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/04/02 10:35:00 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char) c)
			return ((char *) &s[i]);
		i--;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	const char	s[] = "kccq";
	int	c = 'k';
	char	*result;
	result = ft_strrchr(s, c);
	printf("Posición: %ld\n", c, result -s);
	return (0);
}*/
