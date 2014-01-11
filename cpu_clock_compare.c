/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpu_clock_compare.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 14:00:01 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/11 15:06:21 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libspacetime.h"

double		ft_cpu_clock_compare(unsigned long clock_start,
						unsigned long clock_end)
{
	double		time_elapsed_in_seconds;

	time_elapsed_in_seconds = (clock_end - clock_start)
					/ (double)CLOCKS_PER_SEC;
	return (time_elapsed_in_seconds);
}
