/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:22:46 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:22:47 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	int		i;
	char	*dest;

	i = 0;
	if (str != NULL)
	{
		if ((dest = (char *)malloc(sizeof(*dest) *
		(ft_strlen(str) + 1))) == NULL)
			return (NULL);
		while (str[i])
		{
			dest[i] = (*f)(str[i]);
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (0);
}
