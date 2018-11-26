/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:13:35 by yberramd          #+#    #+#             */
/*   Updated: 2018/11/26 18:17:45 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strnchr(const char *s, int c, size_t len)
{
	unsigned int	i;
	char			c1;
	char			*s1;

	i = 0;
	c1 = (char)c;
	s1 = (char*)s;
	while(s1[i] != '\0' && i < len)
	{
		if (s1[i] == c1)
			return (&s1[i]);
		i++;
	}
	if (s1[i] == c1)
		return (&s1[i]);
	return (NULL);
}
