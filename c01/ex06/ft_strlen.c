/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinicius <vinicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:44:40 by vinicius          #+#    #+#             */
/*   Updated: 2025/02/04 22:18:23 by vinicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*#include <stdio.h>
int	main(void)
{
	char *string = "qualquer coisa";
	
	
	printf("contagem de char: %d\n", ft_strlen(string));
	return(0);
}*/