#include "libmx.h"

char *mx_strtrim(const char *str) {
    if (str == 0)
        return 0;

    int f = -1;
    int l = -1;

    int length = mx_strlen(str);
    for (int i = 0; i < length; i++) {
        if (!mx_isspace(str[i])) {
            l = i;
            if (f == -1) 
                f = i;
        }
    }

    if (f == -1)
        return mx_strnew(0);

    int newLength = length - f - length + l+ 1;
    char *result = mx_strnew(newLength);
    mx_strncpy(result, str + f, newLength);
    return result;
}
