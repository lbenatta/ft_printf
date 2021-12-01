/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:17:44 by tbrebion          #+#    #+#             */
/*   Updated: 2021/11/24 13:32:38 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)ptr;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	ptr = str;
	return (ptr);
}
