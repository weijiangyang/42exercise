#include <unistd.h>

// Function to print a single character
static void ft_putchar(char c)
{
    write(1, &c, 1);
}

// Function to print a character in hexadecimal
static void ft_puthex(unsigned char c)
{
    char *hex = "0123456789abcdef";

    ft_putchar(hex[c / 16]);
    ft_putchar(hex[c % 16]);
}

// Function to print a string with non-printable characters replaced by \xx
void ft_putstr_non_printable(char *str)
{
    while (*str)
    {
        if (*str >= 32 && *str <= 126)
        {
            ft_putchar(*str);
        }
        else
        {
            ft_putchar('\\');
            ft_puthex((unsigned char)*str);
        }
        str++;
    }
}

// Function to print a memory area
static void print_address(unsigned long addr)
{
    char hex[16];
    int i = 15;

    while (i >= 0)
    {
        hex[i] = "0123456789abcdef"[addr % 16];
        addr /= 16;
        i--;
    }
    write(1, hex, 16);
}

static void print_hex_data(unsigned char *data, size_t size)
{
    for (size_t i = 0; i < 16; i++)
    {
        if (i < size)
        {
            ft_puthex(data[i]);
        }
        else
        {
            write(1, "  ", 2);
        }
        if (i % 2)
        {
            write(1, " ", 1);
        }
    }
}

static void print_char_data(unsigned char *data, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        if (data[i] >= 32 && data[i] <= 126)
        {
            ft_putchar(data[i]);
        }
        else
        {
            ft_putchar('.');
        }
    }
}

void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned char *data = (unsigned char *)addr;
    unsigned int i = 0;

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

// Example usage
int main(void)
{
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    write(1, "\n", 1);

    char data[] = "Bonjour les amiches\t\n\tce qu on peut faire avec print_memory.";
    ft_print_memory(data, sizeof(data));

    return 0;
}
	
