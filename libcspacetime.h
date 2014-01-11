/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libcspacetime.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 15:28:52 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/11 18:40:28 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSPACETIME_H
# define LIBSPACETIME_H

# include <sys/time.h>
# include <sys/timeb.h>
# include <time.h>
# include "../lib3d/lib3d.h"
# include "../libft/libft.h"

/*
**	Define time in seconds since 1970 !
*/
time_t			ft_time_init(void);
/*
**	Define CPU Time used by the program !
*/
unsigned long	ft_cpu_clock_init(void);
unsigned long	ft_cpu_clock_end(void);
double			ft_cpu_clock_compare(unsigned long clock_start,
							unsigned long clock_end);
/*
**	Print date !
*/
void			ft_print_date(void);
/*
**	Get date !
*/
char			*ft_get_date(void);
/*
**	Get time (seconds/milliseconds/microseconds/nanoseconds) !
*/
unsigned int	ft_get_time_seconds(void);
long long		ft_get_time_milliseconds(void);
int				ft_get_time_microseconds(void);
float			ft_get_time_nanoseconds(void);
/*
**	Print time (seconds/milliseconds/microseconds/nanoseconds) !
*/
void			ft_print_time_seconds(void);
void			ft_print_time_milliseconds(void);
void			ft_print_time_microseconds(void);
void			ft_print_time_nanoseconds(void);
#endif /* !LIBSPACETIME_H */
