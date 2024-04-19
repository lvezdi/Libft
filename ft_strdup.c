/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 20:00:46 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/04/19 20:44:47 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	char	*begin;

	dst = (char *)malloc(ft_strlen(s1) + 1);
	if (dst == 0)
		return (0);
	begin = dst;
	while (*s1 != '\0')
		*dst++ = *s1++;
	*dst = '\0';
	return (begin);
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
