#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
    char *rez;
    int i = 0;
    char *s = 0;

    if (!str)
        return 0;
    s = mx_strnew(mx_strlen(str));
    if (s)
        for (; *str; s[i++] = *(str++))
            if (mx_isspace(*str)) {
                for (s[i++] = ' '; mx_isspace(*str); ++str);
                if (!(*str)) {}
            }
    rez = mx_strtrim(s);
    free(s);
    return rez;
}
