/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:05:30 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 14:37:06 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_hex(int nb)
{
	char	*hex;
	char	*res;

	hex = "0123456789abcdef";
	if (nb > 16)
		ft_putnbr_hex(nb / 16);
	res = hex[nb % 16];
	ft_putchar(hex[nb % 16]);
	res[ft_strlen(res)] = '\0';
	return (ft_strlen(res));
}
