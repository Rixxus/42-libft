/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:30:52 by rmount            #+#    #+#             */
/*   Updated: 2022/01/27 14:53:58 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

int	main(void)
{
	char zero = '0';
	char percentage = '%';
	char a = 'a';
	char F = 'F';
	char tab = '	';
	printf("Testing ft_isalnum\n");
	printf("Should be 48: %i\n", ft_isalnum(zero));
	printf("Should be 0: %i\n", ft_isalnum(percentage));
	printf("Should be 97: %i\n", ft_isalnum(a));
	printf("Should be 70: %i\n", ft_isalnum(F));
	printf("Should be 48: %i\n", ft_isalnum(zero));
}
