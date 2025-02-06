/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viniciusmelo <viniciusmelo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:43:46 by vinicius          #+#    #+#             */
/*   Updated: 2025/02/06 23:51:31 by viniciusmel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i]
		&& (s1[i] || s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
	
}

/*int main(int argc, char **argv)
{
	if(argc == 3)
	{
		printf("%d\n", ft_strcmp(arg[1], argv[2]));
	}
	else
	printf("ERRO, FALTA DE ARGUMENTO")
}
}*/