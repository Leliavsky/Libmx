#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    int i = 0;
    int len_str;
    int len_sub;

    if (str == 0 || sub == 0) 
        return -2;
    len_str = mx_strlen(str);
    len_sub = mx_strlen(sub);
    for (; len_str - len_sub - i >= 0; i++, str++) {
        if (mx_strncmp(str, sub, len_sub) == 0)
            return i;
    }
    return -1;
}
