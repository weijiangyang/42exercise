/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:55:50 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/10 16:57:26 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_ultimate_ft(int *********nbr);

int	main(void)
{
 	int	value;
 	int	*ptr1;
 	int	**ptr2;
 	int	***ptr3;
 	int	****ptr4;
 	int	*****ptr5;
 	int	******ptr6;
 	int	*******ptr7;
 	int	********ptr8;
 	int	*********ptr9;

	value = 0;
	ptr1 = &value;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	printf ("Before: %d\n", value); // Outputs: Before: 0
    	ft_ultimate_ft(ptr9);
	printf ("After: %d\n", value);  // Outputs: After: 42	
	return (0);
}

int	ft_ultimate_ft(int  *********nbr)
{
	*********nbr = 42;

}
