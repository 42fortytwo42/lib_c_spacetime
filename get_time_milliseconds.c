/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_time_milliseconds.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 16:00:51 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/11 16:26:24 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libspacetime.h"

long long ft_get_time_milliseconds(void)
{
	struct timeb tmb;

	ftime(&tmb);
	return (tmb.time * 1000 + tmb.millitm);
}
