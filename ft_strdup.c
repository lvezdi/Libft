/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 20:00:46 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/04/10 10:54:49 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	char	*principio;

	dst = (char *)malloc(ft_strlen(s1) + 1);
	if (dst == 0)
		return (0);
	principio = dst;
	while (*s1 != '\0')
		*dst++ = *s1++;
	*dst = '\0';
	return (principio);
}
/*#include <stdio.h>
int	main(void)
{
	char	original[] = "42 Madrid";
	char	*copy = ft_strdup(original);

	printf("Original: %s\n", original);
	printf("Copy: %s\n", copy);
	free(copy);
	return (0);
}*/
