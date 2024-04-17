/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:19:51 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/04/17 11:36:38 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	n;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_fill_array(char *str, int num, int len)
{
	while (num != 0)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			sign;
	int			len;
	unsigned int	num;

	sign = 1;
	len = ft_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *) calloc (sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		num = n * -1;
		str[0] = '-';
	}
	else
		num = n;
	str = ft_fill_array(str, num, len);
	return (str);
}

/*int	main(void)
{
	int	num = -638;
	char	*result = ft_itoa(num);

	printf("Result: %s", result);
	return (0);
}*/