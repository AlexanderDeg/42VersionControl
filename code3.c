/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-geor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:14:10 by ade-geor          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/03/02 16:35:10 by bocal            ###   ########.fr       */
=======
/*   Updated: 2022/03/02 16:34:38 by mmorriga         ###   ########.fr       */
>>>>>>> 4c2222a2106b67d5fe716c2c5f0ddf8b8fdbe7f7
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
	i = 5;
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
	printf("boo");
	return (dst);
}
