#include "ft_printf.h"


int ft_printf(const char *format, ...)
{
    t_data  data;
    
    va_start(data.ap, format);
    
}



int main() {
    char ch = 'A';
    int num = 10;
    unsigned int unsig_num = 20;
    char str[] = "Hello, world!";
    void* ptr = &num;
    int hex_num = 255;

    //printf
    printf("printf:\n");
    printf("Character: %c\n", ch);
    printf("Integer: %d\n", num);
    printf("Unsigned Integer: %u\n", unsig_num);
    printf("String: %s\n", str);
    printf("Pointer: %p\n", ptr);
    printf("Hexadecimal (lowercase): %x\n", hex_num);
    printf("Hexadecimal (uppercase): %X\n", hex_num);
    printf("Literal percent sign: %%\n");

    //ft_printf
    printf("\nTesting ft_printf:\n");
    ft_printf("Character: %c\n", ch);
    ft_printf("Integer: %d\n", num);
    ft_printf("Unsigned Integer: %u\n", unsig_num);
    ft_printf("String: %s\n", str);
    ft_printf("Pointer: %p\n", ptr);
    ft_printf("Hexadecimal (lowercase): %x\n", hex_num);
    ft_printf("Hexadecimal (uppercase): %X\n", hex_num);
    ft_printf("Literal percent sign: %%\n");
}