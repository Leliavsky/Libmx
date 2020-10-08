#include "libmx.h" 

void *mx_memset(void *b, int c, size_t len) {
    char *buf = (char*) b;
    
    while (len--) {
        *buf++ = (unsigned char)c;
    }
    return b;
}
