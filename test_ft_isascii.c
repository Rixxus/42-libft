/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:57:10 by rmount            #+#    #+#             */
/*   Updated: 2022/01/27 15:01:25 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
int	main(void)
{
	int 	neg = -1;
	int 	large = 555;
	char 	exclaim = '!';
	char 	five = '5';
	char	tab = '	';
	printf("Testing ft_isascii\n");
	printf("Should be 0: %i\n", ft_isascii(neg));
	printf("Should be 0: %i\n", ft_isascii(large));
	printf("Should be 1: %i\n", ft_isascii(exclaim));
	printf("Should be 1: %i\n", ft_isascii(five));
	printf("Should be 1: %i\n", ft_isascii(tab));
}
