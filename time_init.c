/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 13:44:23 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/11 18:49:03 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libspacetime.h"

time_t		ft_time_init(void)
{
	time_t		timer;

	return (time(&timer));
}