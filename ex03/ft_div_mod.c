/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkradebe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 09:35:55 by nkradebe          #+#    #+#             */
/*   Updated: 2020/07/13 08:36:30 by nkradebe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int	a, int	b, int	*div, int	*mod)
{
	if(b	!=	0)
	{
	   	*div	=	a / b;
		*mod	=	a % b;
	}
}

