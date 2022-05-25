/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:24:28 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/25 10:39:44 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rec(int nb)
{
	if (!nb)
		return (1);
	return (rec(nb - 1) * nb);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	return (rec(nb));
}
