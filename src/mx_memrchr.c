#include "libmx.h" 

void *mx_memrchr(const void *s, int c, size_t n) {
    char *a = (char *)s + n;
    
        for (int i = n - 1; i >= 0; i--, a--) {
            if (*a == (unsigned char)c)
                return a;
        }
        return 0;
}
