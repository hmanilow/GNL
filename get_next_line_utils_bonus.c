/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:02:38 by hmanilow          #+#    #+#             */
/*   Updated: 2021/11/30 17:04:18 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	ft_linebreak(char *massivchik)
{
	int	i;

	i = 0;
	if (!massivchik)
		return (0);
	while (massivchik[i])
	{
		if (massivchik[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return ((int)(i));
}

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		i;

	if (!s1)
		return (0);
	copy = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	*ft_strjoin_UPD(char *s1, char *s2)
{
	char			*exit;
	char			*noexit;
	unsigned int	i;

	noexit = s1;
	i = 0;
	if (s1 == 0 && s2 == 0)
		return (0);
	if (s1 == 0)
		return (ft_strdup(s2));
	if (s2 == 0)
		return (ft_strdup(s1));
	exit = (char *)malloc(sizeof(*exit) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (exit == 0)
		return (0);
	while (*s1 != '\0')
		exit[i++] = *s1++;
	while (*s2 != '\0')
		exit[i++] = *s2++;
	exit[i] = '\0';
	free(noexit);
	return (exit);
}
