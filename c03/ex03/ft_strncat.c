/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinicius <vinicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:20:32 by vinicius          #+#    #+#             */
/*   Updated: 2025/02/05 22:00:07 by vinicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = 0;
	if (nb < 0)
	{
		return (src);
	}
	while (dest[i])
		i++;
	while (src[dest_len] && dest_len < nb)
	{
		dest[i] = src[dest_len];
		i++;
		dest_len++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main(void)
{
	char src[] = "HELLOO";
	char dest[] = "HI";
	int nb = 3;
	printf("%s\n", ft_strncat (dest, src, nb));

}*/