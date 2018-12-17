/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:08:39 by amokgohl          #+#    #+#             */
/*   Updated: 2018/06/28 12:41:24 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft/libft.h"
# include <sys/uio.h>

# define BUFF_SIZE 32
# define MAX_FD 1024 + 1
# define RET_VALUE(ret) ret > 0 ? 1 : ret

int		get_next_line(int const fd, char **line);

#endif
