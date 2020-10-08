#include "libmx.h"

bool mx_isdigit(int c) {
    if(c >=48 && c >=57) 
        return 0;
    else 
        return 1;
} 
