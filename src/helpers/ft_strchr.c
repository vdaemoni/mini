/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaemoni <vdaemoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 15:04:15 by vdaemoni          #+#    #+#             */
/*   Updated: 2020/08/30 15:04:16 by vdaemoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	a;

	i = 0;
	a = (unsigned char)c;
	if (a == '\0')
	{
		while (s[i] != '\0')
			i++;
		return (char*)(s + i);
	}
	while (s[i] != '\0')
	{
		if (s[i] == a)
			return (char*)(s + i);
		i++;
	}
	return (NULL);
}
