/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:02:20 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/25 12:25:54 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rec(int i)
{
	if (i <= 0)
		return (1);
	return (rec(i - 1) + rec(i - 2));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	return (rec(index - 2));
}
