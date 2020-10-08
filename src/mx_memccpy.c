#include "libmx.h" 

void *mx_memccpy(void *restrict dst, const void *restrict src,
                 int c, size_t n) {
    char *a = (char *)src;
    char *b = (char *)dst;
    
    for (size_t i = 0; i < n; ++i) {
        *b++ = *a++;
        if (*a == (unsigned char)c) 
            return b + 1;
    }
    return 0;
}
