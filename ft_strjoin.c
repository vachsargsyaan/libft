/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:45:46 by vacsargs          #+#    #+#             */
/*   Updated: 2023/02/07 21:00:13 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1 && s2)
		return (ft_strdup(s2));
	if (!s2 && s1)
		return (ft_strdup(s1));
	j = 0;
	i = -1;
	p = (char *)malloc(sizeof(char) *(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!p)
		return (NULL);
	while (s1[++i] != '\0')
	p[i] = s1[i];
	while (s2[j] != '\0')
	p[i++] = s2[j++];
	p[i] = '\0';
	return (p);
}
