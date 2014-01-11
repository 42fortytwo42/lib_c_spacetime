/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_time_milliseconds.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 16:00:51 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/11 18:37:55 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libspacetime.h"

void		ft_print_time_milliseconds(void)
{
	struct timeb tmb;

	ftime(&tmb);
	ft_putstr("Since 1970 (EPOCH) has past ");
	ft_putnbr(tmb.time);
	ft_putstr(" seconds and \t");
	ft_putnbr(tmb.millitm);
	ft_putstr("mlliseconds\n");
	ft_putstr("Or : ");
	ft_putnbr(tmb.time * 1000 + tmb.millitm);
	ft_putstr(" milliseconds since 1970 (EPOCH)");
}
