/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 16:19:42 by lvelimir          #+#    #+#             */
/*   Updated: 2019/05/17 21:30:58 by lvelimir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*snew;
	unsigned int	i;
	unsigned int	i2;

	if (s == NULL || f == NULL)
		return (NULL);
	i2 = ft_strlen((char *)s);
	i = 0;
	snew = (char *)malloc(sizeof(char) * i2 + 1);
	if (snew == NULL)
		return (NULL);
	while (i < i2)
	{
		snew[i] = f(i, s[i]);
		i++;
	}
	snew[i] = '\0';
	return (snew);
}
