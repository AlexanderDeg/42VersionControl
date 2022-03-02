/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-geor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:14:10 by ade-geor          #+#    #+#             */
/*   Updated: 2021/09/15 11:14:11 by ade-geor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dptr;
	unsigned char	*sptr;

	dptr = (unsigned char *)dst;
	sptr = (unsigned char *)src;
	i = 0;
	if (dptr < sptr)
	{
		while (i < len)
		{
			dptr[i] = sptr[i];
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			dptr[len - i - 1] = sptr[len - i - 1];
			i++;
		}
	}
	return (dst);
}
