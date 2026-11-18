/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-bar <meel-bar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:31:45 by meel-bar          #+#    #+#             */
/*   Updated: 2026/11/12 16:27:04 by meel-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t len)
{
    unsigned char *str = s;
    size_t fill;
    
    fill = 0;
    while (fill <= len)
    {
        str[fill] = c; 
        fill ++;
    }
    return s;   
}


/*#include <stdio.h>

int main(void)
{
    char str[6];

    ft_memset(str, 'A', 5);
    str[5] = '\0';
    printf("%s\n", str);
    return (0);
}*/