/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:23:02 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/01 14:59:54 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

static int	nlen(int n)
{
	int	res;

	res = 0;
	if (n >= 0 && n <= 9)
	{
		res = 1;
		return (res);
	}
	if (n < 0)
		res = 1;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		res++;
	}
	res++;
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		size;

	size = nlen(n);
	res = malloc(sizeof(char) * (size + 1));
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	while (n > 9 || n < -9)
	{
		res[size - 1] = n % 10 + 48;
		n = n / 10;
		size--;
	}
	if ((n >= 0 && n <= 9) || (n <= 0 && n >= -9))
		res[size - 1] = n + 48;
	return (res);
}
