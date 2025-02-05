/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinicius <vinicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:00:08 by vinicius          #+#    #+#             */
/*   Updated: 2025/02/05 14:18:14 by vinicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
		}
		else
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_str_is_lowercase ("sssA"));
	return (0);
}*/
