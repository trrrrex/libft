/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavramen <aavramen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:22:51 by aavramen          #+#    #+#             */
/*   Updated: 2024/01/17 19:45:21 by aavramen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	chr;
	size_t			len;

	chr = c;
	len = ft_strlen(s) + 1;
	while (len)
	{
		if (s[--len] == chr)
		{
			return ((char *)s + len);
		}
	}
	return (0);
}
