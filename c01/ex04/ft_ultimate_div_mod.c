/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinicius <vinicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:13:35 by vinicius          #+#    #+#             */
/*   Updated: 2025/01/21 21:17:53 by vinicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int aux;

    aux = *a;
    *a = *a / *b;
    *b = aux % *b;
}

/*int main()
{
    int a1;
    int b1;
    a1 = 10;
    b1 = 5;
    ft_ultimate_div_mod(&a1 ,&b1);
    printf("valor da divisao: %d\n", a1);
    printf("valor do modulo: %d\n", b1);
}*/