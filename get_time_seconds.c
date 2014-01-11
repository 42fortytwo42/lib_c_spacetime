/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_time_seconds.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 15:55:49 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/11 16:31:39 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libspacetime.h"

unsigned int	ft_get_time_seconds(void)
{
	time_t	timer;

    time(&timer);
    return (timer);
}
