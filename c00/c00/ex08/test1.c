/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <weijiangyang@laposte.net>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 18:42:16 by weijiangyang      #+#    #+#             */
/*   Updated: 2024/12/03 15:58:14 by weijiangyang     ###   ########.fr       */
/*                                                                            */
#include <stdio.h>
#include <unistd.h>

void	generate(int arr[9],int index, int size, int start_digit);
void	ft_putnbr(int n);  

int	main(void)
{
	ft_putnbr(5);
	return (0);
};

void	ft_putnbr(int n)
{
	int arr[9] = { 1,2,3,4,5,6,7,8,9,};
	generate(arr,0, n, 0);
};

void    generate(int arr[9], int index, int size, int start_digit){
    int            next;
    while ( start_digit < size - 1  ){
        while ( arr[size -1] <= 9){
            generate(arr, index, size, start_digit + 1);
            arr[start_digit] ++;
            next = start_digit + 1  ;
            while ( next <= size - 1 ){
                arr[next] = arr[next -1] + 1;
                next ++;
            };
        }
        start_digit ++;
    };
    while ( start_digit == size -1 &&  arr[size -1] <=  9){
        while (index < size ){
            char arrenchar;

            arrenchar = arr[index] + '0';
            write (1, &arrenchar, 1);
            index++;
        };
        write (1, ", ", 2);
        index = 0;
        arr[size -1] ++;
    }
}
