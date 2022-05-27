/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:37:38 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/27 15:06:21 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define NOT_PRIME 0
#define IS_PRIME 1

int	ft_sqrt(int nb)
{
	long	start;
	long	end;
	long	mid;

	start = 0;
	end = nb;
	if (nb < 0)
		return (0);
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == nb)
			return ((int)mid);
		if (mid * mid < nb)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	sqrt;
	int	i;

	if (nb == 0 || nb == 1)
		return (NOT_PRIME);
	i = 0;
	sqrt = ft_sqrt(nb);
	while (!sqrt)
	{
		++i;
		sqrt = ft_sqrt(nb - i);
	}
	i = 2;
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (NOT_PRIME);
		++i;
	}
	return (IS_PRIME);
}
