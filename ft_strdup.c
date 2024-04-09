/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 20:00:46 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/04/09 11:41:19 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1);
{
	char	*dest;
	char	*principio;

	dest = (char *)malloc(ft_strlen(s) + 1);
	if (dest == NULL)
		return (NULL);
	principio = dest;
	while (*s != '\0')
		*dest++ = *s++;
	*dest = '\0';
	return (principio);
}
