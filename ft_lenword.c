/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lenword.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:17:32 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:17:33 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_lenword(const char *str, int c)
{
	int i;
	int len;

	len = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i] == c)
		i++;
	while (str[i] != c)
	{
		if (str[i] == '\0')
			return (len);
		len++;
		i++;
	}
	return (len);
}
