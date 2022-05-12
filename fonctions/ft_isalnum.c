
#include "libft.h"
#include <ctype.h>

int ft_isalnum(int  c)
{
    return (ft_isdigit(c) || ft_isalpha(c));
}

int main(void)
{
    printf("%d\n", ft_isalnum('A'));
    printf("%d\n", isalnum('A'));
    return (0);
}