/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:55:43 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/04/02 18:02:24 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 int	atoi(const char *str)
{
int ft_atoi(const char *str) {
    int i = 0;
    int sign = 1;
    int result = 0;

    // Paso 1: Saltar los espacios en blanco al inicio
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;

    // Paso 2: Determinar el signo
    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // Paso 3: Convertir los caracteres a números
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    // Paso 4: Aplicar el signo al resultado
    return sign * result;
}



}
