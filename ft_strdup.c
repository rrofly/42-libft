/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofde-je </var/mail/rofde-je>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:01:43 by rofde-je          #+#    #+#             */
/*   Updated: 2023/09/04 19:13:22 by rofde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*bq;
	size_t	i;

	i = 0;
	bq = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	while (s[i])
	{
		bq[i] = s[i];
		i++;
	}
	return (bq);
}
