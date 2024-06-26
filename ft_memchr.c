/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 10:06:06 by nosterme          #+#    #+#             */
/*   Updated: 2021/05/28 10:50:43 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * + scans the initial n bytes of the memory area pointed to by s
 *   for the first instance of c
 *   Both c and the bytes of the memory area pointed to by s
 *   are interpreted as unsigned char.
 * + return a pointer to the matching byte
 *   or NULL if the character does not occur in the given memory area
 * + man memchr
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*(unsigned char *)s && n > 1 && \
		*(unsigned char *)s != (unsigned char)c)
	{
		s++;
		n--;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((void *)s);
	return (NULL);
}
