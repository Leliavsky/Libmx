#include "libmx.h"

char* mx_strncpy(char *dst, const char *src, int len){
    int i = 0;
    
    for(; i < len; i++)
        dst[i] = src[i];
    return dst; 
}
