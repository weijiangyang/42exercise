#include <stdlib.h>
#include <stdio.h>

int char_match(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return 	1;
		i++;
	}
	if (c == '\0')
		return 1;
	return 0;
}

int count_words(char *str, char *charset)
{
	int index;
	int words;

	words = 0;
	index = 0;
	while (char_match(str[index], charset))
		index++;
	while (str[index])
	{
		if (!char_match(str[index], charset) && char_match(str[index + 1], charset))
			words++;
		index++;
	}
	return words;
}

void write_word(char *dest, char *str_from, char *charset)
{
	int i;

	i = 0;
	while (!char_match(str_from[i], charset))
	{
		dest[i] = str_from[i];
		i++;
	}
	dest[i] = '\0';
}
	

void  ft_split_1(char **split_words, char *str, char *charset)
{
	int words;
	int i;
	int j;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (char_match(str[i], charset))
			i++;
		else
		{
			j = 0;
			while (!char_match(str[i + j], charset))
				j++;	
			split_words[words] = (char *)malloc ((j + 1) * sizeof(char));
			write_word(split_words[words], str + i, charset);
			words += 1;
			i += j;
		}
	}
}

char **ft_split(char *str, char *charset)
{
	char **res;
	int words;

	words = count_words(str, charset);
	res = (char **)malloc ((words + 1) * sizeof (char*));
	res[words] = "0";	
	ft_split_1(res, str, charset);

	return res;
}

int main(void)
{
	char *charset = "hello";
	char *str = "salutweijiangyanglaval";
	char **res;
	int index;
	int words;

	index = 0;
	words = count_words(str, charset);
	res = ft_split(str, charset);
	while (index < words + 1)
	{
		printf ("%s\n", res[index]);
		index++;
	}
	return 	0;

}
