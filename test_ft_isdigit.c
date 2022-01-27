/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:49:23 by rmount            #+#    #+#             */
/*   Updated: 2022/01/27 13:58:53 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<stdio.h>

int	main(void)
{
	char fullstop = '.';
	char zero = '0';
	char tab = '	';
	char seven = '7';
	printf("Testing ft_isdigit\n");
	printf("Should be 0: %i\n", ft_isdigit(fullstop));
	printf("Should be 48: %i\n", ft_isdigit(zero));
	printf("Should be 0: %i\n", ft_isdigit(tab));
	printf("Should be 55: %i\n", ft_isdigit(seven));
}
