/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinicius <vinicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:16:12 by vinicius          #+#    #+#             */
/*   Updated: 2025/02/04 23:36:49 by vinicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
		}
		else
			return (0);
		i++;
	}
	return (1);
}

/*int main(void)
{
	printf("%i\n", ft_str_is_numeric("12346"));
	return 0;
}*/