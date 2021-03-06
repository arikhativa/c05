/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:11:29 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/25 10:39:34 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ret;

	if (nb < 0)
		return (0);
	i = 1;
	ret = 1;
	while (i <= nb)
	{
		ret = i * ret;
		++i;
	}
	return (ret);
}
