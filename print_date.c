/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_date.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 15:42:42 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/11 15:45:39 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libspacetime.h"

void	 ft_print_date(void)
{
	time_t		timer;
    char		buffer[25];
    struct tm	*tm_info;

    time(&timer);
    tm_info = localtime(&timer);
    strftime(buffer, 25, "%Y:%m:%d\t%H:%M:%S", tm_info);
    ft_putstr(buffer);
}
