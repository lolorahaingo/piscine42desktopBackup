/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 22:40:56 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/18 15:29:12 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%s", ft_param_to_tab(argc, argv)[2].tab[0]);
	return (0);
}
