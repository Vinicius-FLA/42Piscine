/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinicius <vinicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 22:22:07 by vinicius          #+#    #+#             */
/*   Updated: 2025/01/20 22:32:37 by vinicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void    ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;    
}

/*int	main()
{
	int x;
	int z;
	x = 1;
	z = 2;

	ft_swap(&x, &z);
	printf("valor de a: %d\n, valor de b: %d\n", x, z);


}*/