/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:11:29 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/25 10:23:45 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long	i;
	long	sign;
	long	ret;
	long	n;

	n = (long)nb;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}
	i = 1;
	ret = 1;
	while (i <= n)
	{
		ret = i * ret;
		++i;
	}
	return (ret * sign);
}
