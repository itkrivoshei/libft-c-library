/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:53:41 by jstaunto          #+#    #+#             */
/*   Updated: 2020/08/25 13:53:41 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			size(unsigned int n)
{
	size_t			sz;

	sz = 1;
	while (n >= 10)
	{
		n /= 10;
		++sz;
	}
	return (sz);
}

char				*ft_itoa(int n)
{
	char			*str;
	unsigned int	nb;
	unsigned int	sz;
	long long		nbr;

	nbr = n;
	if (nbr < 0)
		nb = (unsigned int)(-nbr);
	else
		nb = (unsigned int)nbr;
	sz = size(nb);
	if (nbr < 0)
		sz++;
	if (!(str = (char *)malloc(sizeof(char) * (sz + 1))))
		return (NULL);
	str[sz] = '\0';
	if (nbr < 0)
		str[0] = '-';
	while (nb >= 10)
	{
		str[--sz] = nb % 10 + '0';
		nb /= 10;
	}
	str[--sz] = nb % 10 + '0';
	return (str);
}
