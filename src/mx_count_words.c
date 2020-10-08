#include "libmx.h"

int mx_count_words(const char *str, char c) {
    int len = 0;
    int count = 0;
    
    if (str == 0)
        return -1;
    while (*str != '\0') {
        if (len == 0 && *str != c) {
            count++;
            len = 1;
        }
        if (*str == c) 
            len = 0;
        str++;
    }
    return count;
}
