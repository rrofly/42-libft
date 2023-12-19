/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je </var/mail/rofde-je>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:53:11 by rofde-je          #+#    #+#             */
/*   Updated: 2023/08/26 17:57:19 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ds;
	const char	*sr;
	size_t		i;

	i = 0;
	ds = dest;
	sr = src;
	while ((i < n) && ds[i] && sr[i])
	{
		ds[i] = sr[i];
		i++;
	}
	return (dest);
}
