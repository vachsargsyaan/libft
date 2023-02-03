/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:04:09 by vacsargs          #+#    #+#             */
/*   Updated: 2023/01/28 20:20:12 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1)+1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (0);
	str = ft_memcpy(str, s1, len);
	return (str);
}
