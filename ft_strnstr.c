/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:16:53 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/04/08 16:05:28 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
		return ((char *)(haystack));
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && len > (i + j) && haystack[i + j]
			&& needle[j])
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{


}*/
