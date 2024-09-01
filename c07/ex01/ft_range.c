/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 23:04:23 by muduran           #+#    #+#             */
/*   Updated: 2024/08/31 23:04:25 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*d;

	if (min >= max)
		return (0);
	range = max - min;
	d = malloc(range * sizeof(int));
	if (!d)
		return (0);
	i = 0;
	while (i < range)
	{
		d[i] = min + i;
		i++;
	}
	return (d);
}
