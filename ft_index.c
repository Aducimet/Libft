/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_index.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:16:50 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:16:50 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#include "libft.h"

size_t	ft_index(const char *str, int c)
{
	size_t index;

	index = 0;
	while (str[index])
	{
		if (str[index] == c)
			return (index + 1);
		index++;
	}
	return (0);
}
