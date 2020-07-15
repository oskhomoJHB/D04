/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskhomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:08:22 by oskhomo           #+#    #+#             */
/*   Updated: 2020/07/15 16:38:47 by oskhomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int		i;

	i = 1;
	if (nb < 0)
	{
		return(0);
	}
	while  (nb > 0 )
{
		i = i * nb;
		nb--;

}
	return(i);
}

int		main()
{
	printf("factorial is = %d\n", ft_iterative_factorial(3));
}
