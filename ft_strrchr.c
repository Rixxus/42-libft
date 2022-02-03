/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 08:32:29 by rmount            #+#    #+#             */
/*   Updated: 2022/02/03 09:38:52 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last;

	i = 0;
	last = -1;
	while (s[i])
	{
		if (s[i] == c)
			last = i;
		i++;
	}
	if ((last >= 0 && last <= (int)ft_strlen(s + 1)) && s[i] != c)
		return ((char *)&s[last]);
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
