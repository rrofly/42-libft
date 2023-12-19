/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je </var/mail/rofde-je>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:51:02 by rofde-je          #+#    #+#             */
/*   Updated: 2023/09/04 17:07:33 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*bq1;
	const char	*bq2;
	size_t		i;

	bq1 = s1;
	bq2 = s2;
	i = 0;
	while (i < n)
	{
		if (bq1[i] != bq2[i])
			return (bq1[i] - bq2[i]);
		i++;
	}
	return (0);
}
