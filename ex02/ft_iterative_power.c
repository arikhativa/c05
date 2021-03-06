/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:41:21 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/25 11:57:18 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	ret;

	i = 0;
	ret = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		ret = nb * ret;
		++i;
	}
	return (ret);
}
