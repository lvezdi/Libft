/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:12:13 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/04/19 20:27:58 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str || !f)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* char	ft_mapi(unsigned int i, char c)
{
	return (c + 1);
}

#include <stdio.h>
int	main(void)
{
	char	*s = "31L`cqhc";
	
	printf("%s", ft_strmapi(s, ft_mapi));
	return(0);
} */