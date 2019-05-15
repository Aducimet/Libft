/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:22:50 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:22:52 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
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
			dest[i] = (*f)(i, str[i]);
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (0);
}
