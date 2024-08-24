/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:06:55 by muduran           #+#    #+#             */
/*   Updated: 2024/08/24 20:39:20 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	sgn;

	i = 0;
	nbr = 0;
	sgn = 1;
	while (!(str[i]))
		return (0);
	while (str[i] == '\v' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == ' ' || str[i] == '\n' || str[i] == '\r')
		i += 1;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sgn = -sgn;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i++] - 48;
	}
	return (nbr * sgn);
}
