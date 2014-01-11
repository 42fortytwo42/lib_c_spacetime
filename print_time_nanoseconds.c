/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_time_nanoseconds.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 17:04:49 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/11 17:44:34 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libspacetime.h"

void		ft_print_time_nanoseconds(void)
{
	struct timeval		tv;
	int					sec;
	int					usec;
	int					nsec;

	gettimeofday(&tv, NULL);
	sec = tv.tv_sec;
	usec = tv.tv_usec;
	nsec = tv.tv_usec * 1000000000;
	ft_putnbr(sec * 100000000 + nsec);
}
