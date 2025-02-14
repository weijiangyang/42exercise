#include <unistd.h>

char	*ft_strcapitalize(char *src);

void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "salut, coMMent tu vAs ? 42mOts quArAnTe-dEux; cinQuante+et+un";
	ft_putstr("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un:");
	ft_putstr(ft_strcapitalize(c));
	ft_putstr(":");
	ft_putstr(c);
}
