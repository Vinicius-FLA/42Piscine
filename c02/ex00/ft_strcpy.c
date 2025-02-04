/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinicius <vinicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 22:27:58 by vinicius          #+#    #+#             */
/*   Updated: 2025/02/04 22:34:54 by vinicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while(src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
int main(void)
{
    char x[] ="oi tudo bem?";
    char y[] = "oie";
    printf("%s\n", y);
    ft_strcpy(y, x);
    printf("%s\n", y);
}