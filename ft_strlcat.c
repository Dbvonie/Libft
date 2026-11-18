/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-bar <meel-bar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 13:06:20 by meel-bar          #+#    #+#             */
/*   Updated: 2026/11/17 13:52:04 by meel-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dstlen;
    size_t i;
    size_t j;

    dstlen = ft_strlen(dst); // dst considered not a valid string inside its buffer
    if (dstsize <= dstlen)
        return (dstsize + ft_strlen(src)); // to see if results was cut means >= dstsize
    
    i = dstlen;
    j = 0;
    while (src[j] != '\0' && i < dstsize - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (dstlen + ft_strlen(src));   
}
