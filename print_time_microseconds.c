/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_time_microseconds.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 17:04:28 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/11 17:13:22 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libspacetime.h"

void	ft_print_time_microseconds(void)
{
	struct timeval	tv;
	int				sec;
	int				usec;

	gettimeofday(&tv, NULL);
	sec = tv.tv_sec;
	usec = tv.tv_usec;
	ft_putnbr(tv.tv_sec * 100000 + tv.tv_usec);
}
