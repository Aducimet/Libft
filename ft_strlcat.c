/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:22:34 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:22:36 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t i;
	size_t lensrc;
	size_t lendest;

	i = 0;
	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	if (len == 0)
		return (lensrc);
	if (len - 1 < lendest)
		return (lensrc + len);
	while (src[i] && lendest + i < len - 1)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensrc);
}
