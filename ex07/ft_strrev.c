/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkradebe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 08:35:15 by nkradebe          #+#    #+#             */
/*   Updated: 2020/07/12 08:58:12 by nkradebe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char	*str)
{
	int		count;

	count	=	0;
	while(str[count]	!=	'\0')
			count++;

	while(count	>=	0)
		{
			str[count];
			count--;
		}
	return(*str);

}
