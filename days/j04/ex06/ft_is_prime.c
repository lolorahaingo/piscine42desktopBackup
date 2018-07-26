/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 21:26:21 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/09 14:23:20 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (0);
	while (i++ <= 46341 && i < nb)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}
