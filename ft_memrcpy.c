/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memrcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:19:27 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:19:28 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrcpy(void *dest, const void *src, size_t len)
{
	size_t i;

	i = len;
	while (i > 0)
	{
		i--;
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	return ((unsigned char *)dest);
}
