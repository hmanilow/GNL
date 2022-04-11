/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:04:05 by hmanilow          #+#    #+#             */
/*   Updated: 2021/11/30 16:56:04 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

char	ft_linebreak(char *massivchik);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
char	*ft_strjoin_UPD(char *s1, char *s2);
int		reading_proof(char *buffer, int *read_p);
void	free_for_real(char **massivchik);
char	*San_Andreas_rift(char *massivchik);
char	*get_next_line(int fd);

#endif
