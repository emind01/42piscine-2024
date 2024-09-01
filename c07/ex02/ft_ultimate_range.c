/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 23:42:50 by muduran           #+#    #+#             */
/*   Updated: 2024/08/31 23:42:52 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	*d;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	d = malloc(bound * sizeof(int));
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	*range = d;
	i = 0;
	while (i < bound)
	{
		d[i] = min + i;
		i++;
	}
	return (bound);
}
