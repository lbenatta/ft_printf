/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:09:10 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 14:49:10 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putunbr(unsigned int nb)
{
	char *res;

	if (nb >= 10)
	{
		ft_putunbr(nb / 10);
	}
	ft_putchar(nb % 10 + 48);
	return (unb_len(nb));
}

