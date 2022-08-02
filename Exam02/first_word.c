/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 22:49:01 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/28 23:09:01 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			while (argv[1][i] >= 9 && argv[1][i] <= 13)
				i++;
			while (argv[1][i] > 32 && argv[1][i] < 126)
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			break;
		}
	}
	write(1, "\n", 1);
	return (0);
}