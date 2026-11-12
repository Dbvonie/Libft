/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-bar <meel-bar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:52:50 by meel-bar          #+#    #+#             */
/*   Updated: 2026/11/10 16:52:50 by meel-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	isal;
	int	isnum;

	isal = ft_isalpha(c);
	isnum = ft_isdigit(c);
	if (isal == 1 || isnum == 1)
		return (1);
	return (0);
}
