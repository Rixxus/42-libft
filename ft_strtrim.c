/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:45:26 by rmount            #+#    #+#             */
/*   Updated: 2022/02/01 15:30:40 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	match(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		front;
	int		back;
	int		i;
	char	*result;

	if (!(s1 && set))
		return (NULL);
	front = 0;
	back = ft_strlen(s1);
	i = 0;
	while (s1[front] && match(s1[front], set))
		front++;
	while (back > front && match(s1[back - 1], set))
		back--;
	result = malloc((back - front + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (front < back)
		result[i++] = s1[front++];
	result[i] = '\0';
	return (result);
}
