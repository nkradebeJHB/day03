/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkradebe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 09:06:22 by nkradebe          #+#    #+#             */
/*   Updated: 2020/07/12 09:52:26 by nkradebe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int		*tab,	int		size)
{
	int		i;

	int		min;

	int		j;
	
	i	=	0;
	j	=	0;
	min	=	tan[0];
	if(!tab)
		return(0);
	while(i	<=	size)
	{
		if(min[j]	<	tab[i])
			min[j]	=	tab[i];
		i++;
		j++;
	}
}
