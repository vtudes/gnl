/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiceli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:01:50 by pmiceli           #+#    #+#             */
/*   Updated: 2017/11/27 21:34:39 by pmiceli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *s1, char *s2)
{
	char		*new;
	size_t		i;
	size_t		k;
	size_t		l;

	l = 0;
	k = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	i = ft_strlen(s1) + ft_strlen(s2);
	if (!(new = (char*)malloc(sizeof(char) * (i) + 1)))
		return (NULL);
	while (k < ft_strlen(s1))
		new[k++] = s1[l++];
	l = 0;
	while (k < i)
	{
		new[k] = s2[l];
		l++;
		k++;
	}
	new[k] = '\0';
	free(s1);
	return (new);
}
