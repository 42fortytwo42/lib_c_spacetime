/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_date.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 15:42:42 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/11 15:51:11 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libspacetime.h"

char	 *ft_get_date(void)
{
	time_t		timer;
    char		buffer[25];
	char		*p_buf;
    struct tm	*tm_info;

	p_buf = &buffer[0];
    time(&timer);
    tm_info = localtime(&timer);
    strftime(buffer, 25, "%Y:%m:%d\t%H:%M:%S", tm_info);
    return (p_buf);
}
