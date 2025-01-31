/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:36:39 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/01/31 14:58:54 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define EVEN_MSG "I have a pair number of arguments."
# define ODD_MSG "I have an impair number of arguments."
# define TRUE 1
# define FALSE 0
# define EVEN even
# define SUCCESS 0

typedef int		t_bool;

int	even(int x)
{
	int	result;

	if (x % 2)
		return (0);
	return (1);
}
#endif
