#include "libmx.h" 

void *mx_memmove(void *dst, const void *src, size_t len) {
    unsigned char *a = (unsigned char *)src;
    unsigned char *b = (unsigned char *)dst;
    int i = 0;

    if (dst <= src) {
        for (size_t i = 0; i < len; ++i) 
            *b++ = *a++;
    }
    else {
        for (i = len; i > 0; i--)
            b[i - 1] = a[i - 1];
    }
    return dst;
}
