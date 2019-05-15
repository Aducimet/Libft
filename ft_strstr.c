/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:24:01 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:24:02 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *src, const char *s2)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)src);
	while (src[i])
	{
		j = 0;
		while (s2[j] == src[i + j])
		{
			if (s2[j + 1] == '\0')
			{
				return ((char *)&src[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
