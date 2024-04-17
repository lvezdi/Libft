/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:13:54 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/04/10 10:09:54 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*pointer;

	if (size != 0 && count > SIZE_MAX / size)
		return (0);
	total_size = count * size;
	pointer = malloc(total_size);
	if (pointer == 0)
		return (0);
	ft_memset(pointer, 0, total_size);
	return (pointer);
}
/*#include <stdio.h>
int	main(void)
{
	int	*ptr;
	ptr = ft_calloc(20, sizeof(int));
	*ptr = 20;
	printf("Allocated memory address: %p\n", ptr);
	printf("value of the variable: %d", *ptr);
	return (0);
}*/
