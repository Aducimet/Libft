/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:23:52 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:23:54 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int i;

	i = ft_strlen(src);
	while (i >= 0)
	{
		if (src[i] == c)
			return ((char *)src + i);
		i--;
	}
	return (NULL);
}
