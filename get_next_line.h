/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarosas < jkarosas@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:34:27 by jkarosas          #+#    #+#             */
/*   Updated: 2021/12/04 20:01:25 by jkarosas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);

char	*ft_read(int fd, char *save);

char	*ft_get_line(char *save);

char	*ft_new_save(char *save);

char	*ft_strchr(char *save, int c);

char	*ft_join(char *s1, char *s2);

size_t	ft_strlen(char *str);

#endif