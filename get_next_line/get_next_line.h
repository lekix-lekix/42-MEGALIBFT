/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kipouliq <kipouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:22:46 by kipouliq          #+#    #+#             */
/*   Updated: 2024/01/11 18:29:50 by kipouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 50
# endif
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*something_happened(char *s1, char *s2);
size_t	ft_strlen_2(const char *s);
char	*ft_strjoin_gnl(char *s1, char *s2);
int		check_static_str(char *static_str, char **eol);
char	*get_nbytes(int fd, int *bytes_read);

#endif