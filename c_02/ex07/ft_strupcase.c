/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:39:04 by ppoti             #+#    #+#             */
/*   Updated: 2022/07/19 14:40:36 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		else
			i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[10] = "aadfghjkz";
	char	str2[10] = "SFGJLa";
	char	str3[10] = "FhFjPl";

	printf("%s\n", ft_strupcase(str));
	printf("%s\n", ft_strupcase(str2));
	printf("%s", ft_strupcase(str3));
}*/
