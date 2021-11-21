/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:28:50 by abeznik       #+#    #+#                 */
/*   Updated: 2021/11/21 13:50:00 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = dst;
	s = (unsigned char *)src;
	while (n > 0)
	{
		if (*s == (unsigned char)c)
		{
			*d = *s;
			return (d + 1);
		}
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (NULL);
}
