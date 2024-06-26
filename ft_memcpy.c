/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 15:05:58 by nosterme          #+#    #+#             */
/*   Updated: 2021/05/21 14:22:45 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * + copies n bytes from memory area src to memory area dest
 *   The memory areas must not overlap.
 *   Use ft_memmove if the memory areas do overlap.
 * + returns a pointer to dest
 * + man memcpy
 */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n > 0)
	{
		n--;
		*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
	}
	return (dest);
}
