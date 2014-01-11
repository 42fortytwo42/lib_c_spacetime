/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_time_seconds.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 16:31:14 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/11 16:32:41 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libspacetime.h"

void	ft_print_time_seconds(void)
{
	time_t		timer;

    time(&timer);
    ft_putnbr(timer);
}
