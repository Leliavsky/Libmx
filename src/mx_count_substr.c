#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    int i = 0;   
    int len_str = 0;
    int len_sub = 0;
    
    if (str == 0 || sub == 0) 
        return -1;
    len_sub = mx_strlen(sub);
    len_str = mx_strlen(str);
    if (len_sub == 0)
        return 0;
    for (; len_str - len_sub - i >= 0; i++) {
        if (mx_strncmp(str, sub, len_sub) == 0) 
            count++;
        str++;
    }
    return count;
}
