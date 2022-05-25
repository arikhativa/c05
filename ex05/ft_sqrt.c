/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:59:30 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/25 14:34:30 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
