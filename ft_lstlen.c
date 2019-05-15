/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:18:02 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:18:03 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstlen(t_list *lst)
{
	size_t	len;
	t_list	*lstemp;

	if (!lst)
		return (0);
	len = 1;
	lstemp = lst;
	while (lstemp->next)
	{
		lstemp = lstemp->next;
		len++;
	}
	return (len);
}
