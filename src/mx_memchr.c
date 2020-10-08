#include "libmx.h" 

void *mx_memchr(const void *s, int c, size_t n) {
    char *a = (char *)s;
    
        for (size_t i = 0; i < n; i++, a++) {
            if (*a == (unsigned char)c)
                return a;
        }
        return 0;
}
