/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinicius <vinicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 22:06:04 by vinicius          #+#    #+#             */
/*   Updated: 2025/02/04 22:06:56 by vinicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char letra = 'a';
	while( letra <='z')
	{
		write(1, &letra, 1);
		letra++;
	}
		
	

}

int main()
{

	ft_print_alphabet();
	return(0);
	
}






//retorno nome da funcao(oq ela receba)