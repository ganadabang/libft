/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonsok <hyeonsok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 15:50:14 by SSONG             #+#    #+#             */
/*   Updated: 2021/01/03 18:29:37 by hyeonsok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void *first_dst;

	first_dst = dst;
	if (dst == src)
		return (first_dst);
	while (n--)
		*(char *)dst++ = *(char *)src++;
	return (first_dst);
}
