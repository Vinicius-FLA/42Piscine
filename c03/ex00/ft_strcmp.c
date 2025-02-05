/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinicius <vinicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:43:46 by vinicius          #+#    #+#             */
/*   Updated: 2025/02/05 15:07:43 by vinicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] && str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int main(void)
{
	char str[] = "a@F2";
	printf ("%s\n", ft_strupcase (str));
	return (0);
}