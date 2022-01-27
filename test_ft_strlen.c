/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:10:03 by rmount            #+#    #+#             */
/*   Updated: 2022/01/27 16:27:31 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

int	main(void)
{
	const char *s1 = "Puppies";
	const char *s2 = "Cat";
	const char *s3 = "Supercalifragilisticexpialidocious";
	const char *s4 = "";
	printf("Testing ft_strlen\n");
	printf("Should return 7: %zu\n", ft_strlen(s1));
	printf("Should return 3: %zu\n", ft_strlen(s2));
	printf("Should return 34: %zu\n", ft_strlen(s3));
	printf("Should return 0: %zu\n", ft_strlen(s4));
}
