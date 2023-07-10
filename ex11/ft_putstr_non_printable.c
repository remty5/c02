/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:21:06 by event             #+#    #+#             */
/*   Updated: 2023/07/10 14:11:22 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (i[str])
	{
		if (' ' <= str[i] && str[i] <= '~')
			write(1, str + i, 1);
		else
		{
			write(1, "\\", 1);
			write(1, hex + (unsigned char) str[i] / 16, 1);
			write(1, hex + (unsigned char) str[i] % 16, 1);
		}
		i++;
	}
}
