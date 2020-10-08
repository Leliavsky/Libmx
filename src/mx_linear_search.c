#include "libmx.h"

int mx_linear_search(char **arr, const char *s) {
    int i = 0;
    
    while (arr[i] != NULL) {
        if (mx_strcmp(arr[i], s) == 0) 
           return i; 
        i++;
    }
    return -1;    
}
