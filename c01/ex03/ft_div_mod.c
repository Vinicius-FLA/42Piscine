/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinicius <vinicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:06:27 by vinicius          #+#    #+#             */
/*   Updated: 2025/02/04 22:22:04 by vinicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
    int z;
    int x;
    int divisao;
    int modulo;
    z = 13;
    x = 10;

    ft_div_mod(z, x, &divisao, &modulo);
    printf("valor da divisao: %d\n", divisao);
    printf("valor do modulo: %d\n", modulo);
}*/
