/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:19:02 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:19:02 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tmpdest;
	unsigned char	*tmpsrc;

	i = 0;
	tmpdest = (unsigned char *)dest;
	tmpsrc = (unsigned char *)src;
	while (i < len)
	{
		tmpdest[i] = tmpsrc[i];
		i++;
	}
	return (tmpdest);
}
