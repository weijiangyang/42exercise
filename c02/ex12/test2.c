#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_puthex(char c)
{
	char *hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}	

void ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if ( *str >= 32 && *str <= 126)
		{
			ft_putchar(*str);
		}
		else
		{
			ft_putchar('\\');
			ft_puthex(*str);
		}
		str++;
	}
}
void print_address(unsigned long addr)
{
	char hex[16];
	int i = 15;

	while (i >= 0)
	{
		hex[i] = "0123456789abcdef"[addr % 16];
		addr /= 16;
		i--;
	}
	write (1, hex, 16);
}

void print_hex_data(unsigned char *data, size_t size)
{
	int i;
	
	i = 0;
	while ( i < 16)
	{
		if ( i < size)
		
			ft_puthex(data[i]);
		else
			write (1, &("  "), 2);
		if (i % 2)
			write(1, &(" "), 1);
		i++;
	}
}		

void print_char_data(char *data, size_t size)
{
	int i; 

	i = 0;
	while (i < size)
	{
		if ( data[i] >= 32 && data[i] <= 126)
			ft_putchar(data[i]);
		else
			write(1, &("."), 1);
		i++;
	} 
}

void  *ft_print_memory(void *addr, unsigned int  size)
{
	unsigned int i = 0;
	void *data;

	data = addr; 
      while (i < size)
      {
          unsigned int line_size = (size - i >= 16) ? 16 : size - i;
 
          print_address((unsigned long)(data + i));
          write(1, ": ", 2);
          print_hex_data(data + i, line_size);
         print_char_data(data + i, line_size);
          write(1, "\n", 1);
 
         i += 16;
     }
     return addr;
}

int main(void)
{
	char *str = "Coucou, c\\'est moi, comment allez vous?! ca va , et toi? bien!";

//	ft_putstr_non_printable(str);
	char data[] = "Conjour les amiches\t\n\tce qu on peut faire avec print_memory.";
//	print_address((unsigned long)data);
	ft_print_memory(data, sizeof(data));
//	print_hex_data(data, sizeof(data));
	return 0;
}
