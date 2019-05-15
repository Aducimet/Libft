/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memalloc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:18:29 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:18:30 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t len)
{
	char *tmp;

	if ((tmp = (char *)malloc(sizeof(*tmp) * len)) == NULL)
		return (NULL);
	ft_bzero(tmp, len);
	return (tmp);
}
