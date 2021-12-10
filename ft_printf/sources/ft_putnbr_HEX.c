/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_HEX.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:05:49 by tbrebion          #+#    #+#             */
/*   Updated: 2021/12/10 13:01:46 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_HEX(int nb)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (nb > 16)
		ft_putnbr_hex(nb / 16);
	ft_putchar(hex[nb % 16]);
}
