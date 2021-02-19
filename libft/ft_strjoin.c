/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marreche <marreche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:46:59 by marreche          #+#    #+#             */
/*   Updated: 2021/02/11 12:20:51 by marreche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function returns the concatenation of two strings,
** "s1" and "s2". It allocates memory first and terminates
** the new string with a '\0'.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	end;
	int		i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	end = ft_strlen(s1);
	if (!(new = (char *)malloc(sizeof(char) *
	(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		new[end] = s2[i];
		i++;
		end++;
	}
	new[end] = '\0';
	return (new);
}
