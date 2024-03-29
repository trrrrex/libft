/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavramen <aavramen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:57:40 by aavramen          #+#    #+#             */
/*   Updated: 2024/01/25 18:58:02 by aavramen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;
	size_t	b;

	i = 0;
	b = ft_strlen(s);
	if (!s)
		return (NULL);
	if (b < start)
		len = 0;
	else if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while ((i < (int)len) && (s[start] != '\0') && (start < ft_strlen(s)))
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[len] = '\0';
	return (substr);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    const char str1[] = "okay";
    char *str2 = ft_substr(str1, 6, 14); 

    if (str2 != NULL) {
        printf("Substring: %s\n", str2);
        free(str2); 
    } else {
        printf("\n");
    }

    return 0;
}
*/
