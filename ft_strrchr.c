/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:24:50 by vacsargs          #+#    #+#             */
/*   Updated: 2023/01/31 15:20:01 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			p = ((char *)(s + i));
		i++;
	}
	if (s[i] == (char) c)
		p = (char *)(s + i);
	return (p);
}
