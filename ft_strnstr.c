/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:23:38 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:23:41 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *s2, size_t len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)src);
	while (src[i] && i < len)
	{
		j = 0;
		while (s2[j] == src[i + j] && (i + j) < len)
		{
			if (s2[j + 1] == '\0')
				return ((char *)src + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
