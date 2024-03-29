/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavramen <aavramen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:40:42 by aavramen          #+#    #+#             */
/*   Updated: 2024/01/24 17:29:25 by aavramen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
	char my_func(unsigned int i, char str)
	{
		printf("it is: index = %d and %c\n", i, str);
		return str - 32;
	}

	int main()
	{
		char str[10] = "hello.";
		printf("The result is %s\n", str);
		char *result = ft_strmapi(str, my_func);
		printf("The result is %s\n", result);
		return 0;
	}
*/
