/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:23:27 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:23:28 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t len)
{
	char *tmp;

	if ((tmp = (char *)malloc(sizeof(*tmp) * (len + 1))) == NULL)
		return (NULL);
	ft_bzero(tmp, len + 1);
	return (tmp);
}
