#include <stdio.h>
#include <unistd.h>

void  generate(int arr[10] , int index, int size);

int main ()
	{
		int i = 0;
		int arr[10] = {0,1,2,3,4,5,6,7,8,9};
		generate(arr, 0, 4);
		return 0;
	};

void  generate(int arr[10], int index, int size)
	{
	char comma = ',';
while ( arr[size -1 ] <= 9)
{
	while ( arr[size -1] <= 9 )
{
	while ( arr[size -1 ] <= 9)
	{
		while ( arr[size -1] <=  9)
		{
				while (index < size )
				{			
					char arrenchar;	
					arrenchar = arr[index] + '0';	
					write(1, &arrenchar, 1);
					index++;
				};
				write(1, &comma, 1);
				index = 0;
				arr[size -1] ++;
		}
		arr[size -2] ++; 
		arr[size -1] = arr[size -2] + 1;
	}
		arr[size -3 ] ++;
		arr[size - 2] = arr[size -3] + 1;
		arr[size -1] = arr[size -2] + 1;	
}
		arr[size - 4 ] ++;
		arr[size - 3 ] = arr[size -4 ] + 1;
		arr[size -2 ] = arr[size - 3 ] + 1;
		arr[size -1 ] = arr[size -2 ] + 1;
}	
}		
