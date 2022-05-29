/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:37:38 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/29 14:33:23 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define NOT_PRIME 0
#define IS_PRIME 1

int	ft_sqrt(int nb)
{
	long	start;
	long	end;
	long	mid;
	long	ret;

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
		{
			ret = start;
			start = mid + 1;
		}
		else
			end = mid - 1;
	}
	while (ret * ret < nb)
		++ret;
	return (ret - 1);
}

int	ft_is_prime(int nb)
{
	int	sqrt;
	int	i;

	if (nb == 2 || nb == 3)
		return (IS_PRIME);
	if (nb < 2 || nb % 2 == 0)
		return (NOT_PRIME);
	if (nb < 9)
		return (IS_PRIME);
	if (nb % 3 == 0)
		return (NOT_PRIME);
	sqrt = ft_sqrt(nb);
	i = 5;
	while (i <= sqrt)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (NOT_PRIME);
		i += 6;
	}
	return (IS_PRIME);
}
