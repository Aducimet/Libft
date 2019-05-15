/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:21:23 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:21:24 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	unsigned int i;
	unsigned int len;

	len = ft_strlen(src);
	i = 0;
	if (c == '\0')
		return ((char *)src + len);
	while (src[i])
	{
		if (src[i] == c)
			return ((char *)src + i);
		i++;
	}
	return (NULL);
}
