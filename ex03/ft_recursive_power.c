/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskhomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:04:17 by oskhomo           #+#    #+#             */
/*   Updated: 2020/07/17 13:31:48 by oskhomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int a;
	
	if (power < 0)
	{
		return(0);
	}
	else if (power == 0)
	{
		return(1);
	}
	 else
	{
	a = nb * ft_recursive_power(nb,power -1);
	}
	return(a);
}	
