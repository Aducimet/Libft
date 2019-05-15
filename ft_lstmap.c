/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:18:08 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:18:12 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lstdest;
	t_list	*beginlst;
	t_list	*lstemp;

	if (!lst || !f)
		return (NULL);
	lstemp = f(lst);
	if ((lstdest = ft_lstnew(lstemp->content, lstemp->content_size)) == NULL)
		return (NULL);
	beginlst = lstdest;
	lst = lst->next;
	while (lst)
	{
		lstemp = f(lst);
		if ((lstdest->next = ft_lstnew(lstemp->content,
		lstemp->content_size)) == NULL)
			return (NULL);
		lstdest = lstdest->next;
		lst = lst->next;
	}
	return (beginlst);
}
