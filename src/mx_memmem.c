#include "libmx.h" 

void *mx_memmem(const void *big, size_t big_len, const void *little,
                size_t little_len) {
    unsigned char *a = (unsigned char *)big;
    unsigned char *b = (unsigned char *)little;

    if (!(big_len < little_len) && (big_len && little_len) > 0)
        for ( ; *a; a++)
            if (!mx_memcmp(a, b, little_len - 1))
                return a;
    return NULL;
}
