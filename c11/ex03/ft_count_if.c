#include <stdio.h>

int str_to_int(char *str);

int ft_count_if(char **tab, int length, int(*f)(char*))
{
	int count;
	int i;
	
	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count ++;
		i++;
	}
	printf ("%d\n", i);
	return count;
}


int str_to_int(char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    if (!str || !str[i]) // 处理 NULL 和空字符串
        return 0;

    // 处理正负号
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }

  // 遍历字符串
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
} 


int main(void)
{
        int result;
        char *str[] = {"0", "10","11", NULL};

        result = ft_count_if(str,3,  str_to_int);
        printf ("%d\n",result);
        return 0;
}
