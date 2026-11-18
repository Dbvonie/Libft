
#include <stddef.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *dest = dst;
    unsigned const char *str = src;
    size_t i;

    if (dest < str)
    {
        i = 0;
        while (i < len)
        {
            dest[i] = str[i];
            i++;
        }
    } 
    else
    {
        i = len;
        while (i > 0)
        {
            i--;
            dest[i] = str[i];
        }
    }
    return dest;
}

#include <stdio.h>

int main(void)
{
    char str[7] = "ABCDEF";

    ft_memmove(str, str + 3, 3);
    printf("%s\n", str);
    return (0);
}