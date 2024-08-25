/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:58:46 by muduran           #+#    #+#             */
/*   Updated: 2024/08/25 18:58:54 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i <= power)
	{
		res *= nb;
		power--;
	}
	return (res);
}
