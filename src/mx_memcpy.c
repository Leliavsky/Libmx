#include "libmx.h" 

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    char *a = (char *)src;
    char *b = (char *)dst;
    
    for (size_t i = 0; i < n; ++i) {
        *b++ = *a++;
    }
    return dst;
}
