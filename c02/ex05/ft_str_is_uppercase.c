/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinicius <vinicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:18:36 by vinicius          #+#    #+#             */
/*   Updated: 2025/02/05 14:25:52 by vinicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
		}
		else
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf ("%d\n", ft_str_is_uppercase ("AAAAAAaAAA"));
	return (0);
}*/
