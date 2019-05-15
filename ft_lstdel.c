/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:17:44 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:17:45 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *start;

	start = *alst;
	if (start->next)
		ft_lstdel(&start->next, del);
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
