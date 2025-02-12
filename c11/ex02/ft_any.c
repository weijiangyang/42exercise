#include <stdlib.h>
#include <stdio.h>

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

int  ft_any(char **tab, int(*f)(char*))
{
	int i;
	int *nbs;
	int size;

	i = 0;
	while (tab[i])
		i++;
	nbs = malloc ((i + 1) * sizeof(int));
	i = 0;
	while (tab[i])
	{
		nbs[i] = f(tab[i]);
		i++;
	}
	size = i;
//	printf ("%d\n", i);
	i = 0;
	while (i < size)
	{
		if (nbs[i] != 0)
			return 1;
		else
			i++;
	}
	return 0;
}

int main(void)
{
	int result;
	char *str[] = {"0", "0", NULL};	
	
	result = ft_any(str, str_to_int);
	printf ("%d\n",result);
	return 0;
}


		
