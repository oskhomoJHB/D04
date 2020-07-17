/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_iterative_power.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskhomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 15:53:30 by oskhomo           #+#    #+#             */
/*   Updated: 2020/07/17 11:26:35 by oskhomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb,int power)
{
	int		a;

	a = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return(1);
	}
	else 
	{
	while (power > 0)
	{
		a = a * nb;
		power--;
	}
		return (a);
}
