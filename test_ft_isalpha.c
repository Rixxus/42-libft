/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:01:20 by rmount            #+#    #+#             */
/*   Updated: 2022/01/27 14:06:53 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

int	main(void)
{
	char a = 'a';
	char $ = '$';
	char one = '1';
	char Z = 'Z';
	printf("Testing ft_isalpha\n");
	printf("Should be 97: %i\n", ft_isalpha(a));
	printf("Should be 0: %i\n", ft_isalpha($));
	printf("Should be 0: %i\n", ft_isalpha(one));
	printf("Should be 90: %i\n", ft_isalpha(Z));
}
