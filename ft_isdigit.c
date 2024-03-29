/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavramen <aavramen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:20:32 by aavramen          #+#    #+#             */
/*   Updated: 2024/01/14 17:57:30 by aavramen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h" */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	printf("%d", ft_isdigit('e'));
	return (0);
}
*/
