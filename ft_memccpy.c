/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:18:38 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:18:40 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char	*tmpdest;
	unsigned char	*tmpsrc;
	size_t			i;

	i = 0;
	tmpdest = (unsigned char *)dest;
	tmpsrc = (unsigned char *)src;
	while (i < len)
	{
		tmpdest[i] = tmpsrc[i];
		if (tmpsrc[i] == (unsigned char)c)
			return (tmpdest + i + 1);
		i++;
	}
	return (NULL);
}
