#include "libmx.h"

void mx_str_reverse(char *s) {
    int m = mx_strlen(s)/2;
        for (int i = 0; i < m; i++) 
        mx_swap_char(&s[i], &s[mx_strlen(s) - 1 - i]);
}
