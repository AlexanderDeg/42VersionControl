/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-geor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:14:10 by ade-geor          #+#    #+#             */
/*   Updated: 2022/03/09 12:47:19 by ade-geor         ###   ########.fr       */
/*   Updated: 2022/03/02 16:35:10 by bocal            ###   ########.fr       */
/*   Updated: 2022/03/02 16:34:38 by mmorriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t length)
{
	size_t			i;
	unsigned char	*dptr;
	unsigned char	*sptr;

	dptr = (unsigned char *)dst;
	sptr = (unsigned char *)src;
	i = 5;
	if (dptr < sptr)
	{
		while (i < length)
		{
			dptr[i] = sptr[i];
			i++;
		}
	}
	else
	{
		while (i < length)
		{
			dptr[length - i - 1] = sptr[length - i - 1];
			i++;
		}
	}
	printf("boo");
	return (dst);
}
