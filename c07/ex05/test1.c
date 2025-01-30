#include <stdio.h>
#include <stdlib.h>

int char_is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return 1;
		else
			charset++;
	}
	if (c == '\0')
		return 1;
	return 0;
}	

int count_words(char *str, char *charset)
{
	int words;
	int i;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!char_is_separator(str[i], charset) && char_is_separator(str[i + 1], charset))
			words++;
		i++;
	}
	return words;
}

void write_word(char *dest, char *from, char *charset)
{
	int i;

	i = 0;
	while (!char_is_separator(from[i], charset))
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void write_split(char **split, char *str, char *charset)
{
	int i;
	int j;
	int word;

	i = 0;
	word = 0;
	while (str[i] )
	{
		if (char_is_separator(str[i], charset))
			i++;
		else
		{
			j = 0;
			while (!char_is_separator(str[i + j], charset))
				j++;
			split[word] = malloc((j + 1) * sizeof(char));
			write_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char **ft_split(char *str, char *charset)
{
	int words;
	char **res;

	words = count_words(str, charset);
	res = (char**) malloc ((words + 1) * sizeof (char*));
	write_split(res, str, charset);
	res[words] = 0;
	return res;
}
	
int main(void)
{
	char *str = "this is my programmation of C language!";
	char *charset = "syf";
	char **result;
	int size;
	int i;

	i = 0;
	size = count_words(str, charset);
	result = ft_split(str, charset);		
	while (i < size)
	{
		printf ("%s\n", result[i]);
		i++;
	}
	return 0;
}	
