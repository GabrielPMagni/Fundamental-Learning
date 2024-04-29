#include "libft.h"

int ft_strlen(char const *s) {
    unsigned int counter;
    counter = 0;
    while (s[counter]) {
        counter++;
    }
    return counter;
}
