/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je </var/mail/rofde-je>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:18:03 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/30 14:33:42 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sb;
	size_t			i;

	sb = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (sb[i] == c)
			return ((char *)sb + i);
		i++;
	}
	return (NULL);
}
