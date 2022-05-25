/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:57:57 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/25 12:01:34 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rec(int nb, int power)
{
	if (!power)
		return (nb);
	return (rec(nb, power - 1) * nb);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (rec(nb, power - 1));
}
