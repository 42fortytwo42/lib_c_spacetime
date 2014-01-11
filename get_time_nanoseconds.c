/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_time_nanoseconds.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 15:56:11 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/11 17:46:55 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libspacetime.h"

float		ft_get_time_nanoseconds(void)
{
	struct timeval	tv;
	float			sec;
	float			usec;
	float			nsec;

	gettimeofday(&tv, NULL);
	sec = (float)tv.tv_sec;
	usec = (float)tv.tv_usec;
	nsec = (float)tv.tv_usec * 1000000000;
	return (sec * 100000000 + nsec);
}
