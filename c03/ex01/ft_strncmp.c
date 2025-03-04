/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinicius <vinicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:36:08 by viniciusmel       #+#    #+#             */
/*   Updated: 2025/02/05 22:42:30 by vinicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (i < n - 1
		&& (s1[i] || s2[i])
		&& (s1[i]) == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int main(void)
{
	char str1[] = "Rodrigoo";
	char str2[] = "Rodrigo";
	
	printf ("Resultado: %d\n", ft_strncmp(str1, str2, 9));
}*/