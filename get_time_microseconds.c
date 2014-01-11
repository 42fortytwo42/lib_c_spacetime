/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_time_microseconds.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 15:55:58 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/11 18:38:49 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libspacetime.h"

int		ft_get_time_microseconds(void)
{
	struct timeval	tv;
	int				sec;
	int				usec;

	gettimeofday(&tv, NULL);
	sec = tv.tv_sec;
	usec = tv.tv_usec;
	return (tv.tv_sec * 100000 + tv.tv_usec);
}
