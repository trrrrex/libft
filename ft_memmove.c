/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavramen <aavramen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:09:28 by aavramen          #+#    #+#             */
/*   Updated: 2024/01/24 18:52:05 by aavramen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*sr;

	dest = (unsigned char *)dst;
	sr = (const unsigned char *)src;
	if (dest > sr)
	{
		while (len--)
			dest[len] = sr[len];
	}
	else if (dest < sr)
		ft_memcpy(dst, src, len);
	return (dst);
}
