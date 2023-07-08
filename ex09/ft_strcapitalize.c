/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:16:06 by event             #+#    #+#             */
/*   Updated: 2023/07/08 18:14:45 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		if (c && 'a' <= str[i] && str[i] <= 'z')
		{
			str[i] -= 32;
			c = 0;
		}
		else if ('0' <= str[i] && str[i] <= '9')
			c = 0;
		else if (str[i] < 'A' || ('Z' < str[i] && str[i] < 'a') || 'z' < str[i])
			c = 1;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%s\n", ft_strcapitalize(argv[1]));
}*/
