/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:16:06 by event             #+#    #+#             */
/*   Updated: 2023/07/08 13:43:07 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (str[i] != '\0')
	{
		if (c && 'a' <= str[i] && str[i] <= 'z')
		{
			str[i] -= 32;
			c = 0;
		}
		else if ('0' <= str[i] && str[i] <= '9')
			c = 0;
		else if (!c && 'A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		else if (str[i] < 'A' || 'Z' < str[i] && str[i] < 'a' || 'z' < str[i])
			c = 1;
		i++;
	}
	return (str);
}

int main(int argc, char *argv[])
{
	printf("%s\n", ft_strcapitalize(argv[1]));
}
