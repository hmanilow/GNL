/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:03:45 by hmanilow          #+#    #+#             */
/*   Updated: 2021/11/30 16:55:03 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

int	reading_proof(char *buffer, int *read_p)
{
	if (*read_p < 0)
	{
		if (buffer)
			free(buffer);
		return (0);
	}
	return (1);
}

char	*San_Andreas_rift(char *massivchik)
{
	char	*str2;
	int		i;
	int		j;

	i = 0;
	str2 = ft_strdup(massivchik);
	if (str2 == 0)
		return (NULL);
	while (massivchik[i] != '\n')
		i++;
	i++;
	str2[i] = '\0';
	j = 0;
	while (massivchik[i + j])
	{
		massivchik[j] = massivchik[i + j];
		j++;
	}
	massivchik[j] = '\0';
	return (str2);
}

char	*readik(int fd, int read_p, char *massivchik)
{
	char	*buffer;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (!ft_linebreak(massivchik))
	{
		read_p = read(fd, buffer, BUFFER_SIZE);
		if (!reading_proof(buffer, &read_p))
			return (NULL);
		buffer[read_p] = '\0';
		if (read_p == 0)
			break ;
		massivchik = ft_strjoin_UPD(massivchik, buffer);
		if (massivchik == 0)
		{
			free(buffer);
			return (NULL);
		}
	}
	free(buffer);
	return (massivchik);
}

void	free_for_real(char **massivchik)
{
	free(*massivchik);
	*massivchik = 0;
}

char	*get_next_line(int fd)
{
	static char	*massivchik[1022];
	char		*str1;

	if (fd < 0 || fd > 1022)
		return (NULL);
	massivchik[fd] = readik(fd, 0, massivchik[fd]);
	if (!massivchik[fd])
		return (NULL);
	if (ft_linebreak(massivchik[fd]))
	{
		str1 = San_Andreas_rift(massivchik[fd]);
		if (str1 == 0)
		{
			free(massivchik[fd]);
			return (NULL);
		}
		if (*massivchik[fd] == '\0')
			free_for_real(&massivchik[fd]);
	}
	else
	{
		str1 = massivchik[fd];
		massivchik[fd] = 0;
	}
	return (str1);
}
