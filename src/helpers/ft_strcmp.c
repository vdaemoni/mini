/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaemoni <vdaemoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 15:04:26 by vdaemoni          #+#    #+#             */
/*   Updated: 2020/08/30 15:04:26 by vdaemoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int diff;

	i = 0;
	diff = 0;
	while (s2[i] != '\0' || s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = (unsigned char)s1[i] - (unsigned char)s2[i];
			break ;
		}
		i++;
	}
	return (diff);
}
