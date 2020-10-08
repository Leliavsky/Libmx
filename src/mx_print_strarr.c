#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    if (!arr || !delim) 
        return;
    for (; *arr; arr++) {
        mx_printstr(*arr);
        if (*arr != 0)
            mx_printstr(delim);
    }
    mx_printstr("\n");
}
