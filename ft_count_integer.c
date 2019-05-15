/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_count_integer.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aducimet <aducimet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/15 18:16:37 by aducimet     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/15 18:16:39 by aducimet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_integer(int nb)
{
	size_t	counter;

	counter = 0;
	while (nb)
	{
		nb /= 10;
		counter++;
	}
	return (counter);
}
