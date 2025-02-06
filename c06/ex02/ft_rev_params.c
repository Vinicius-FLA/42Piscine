/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinicius <vinicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:42:51 by vinicius          #+#    #+#             */
/*   Updated: 2025/02/06 14:44:15 by vinicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	argc -= 1;
	while (argc > 0)
	{
		i = 0;
		while (argv[argc][i] > 0)
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
		write (1, "\n", 1);
		argc--;
	}
}
