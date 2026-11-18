/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-bar <meel-bar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 18:35:48 by meel-bar          #+#    #+#             */
/*   Updated: 2026/11/16 19:04:55 by meel-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char		*dest = dst;
    const unsigned char	*str = src;
    size_t				i;

    i = 0;
    while (i < n)
    {
        dest[i] = str[i];
        i++;
    }
    return (dst);
}
