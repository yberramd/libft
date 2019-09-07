/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blank.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:10:35 by yberramd          #+#    #+#             */
/*   Updated: 2019/08/15 17:14:00 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_blank(char *str)
{
	int	i;

	i = 0;
	while (ft_isspace(str[i]) && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}