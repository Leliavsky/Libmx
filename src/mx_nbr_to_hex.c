#include "libmx.h"

char* mx_nbr_to_hex(unsigned long nbr){
    char *res = NULL;
    int size = 0; 
    int i = 0;
    unsigned long len = nbr;

    if(nbr == 0) 
        return "0";
    for (; len != 0; size++) {
        len /= 16;
    }
    res = mx_strnew(size);
    for (i = size - 1; nbr != 0; i--) {
        int temp = nbr % 16;
        res[i] = (temp < 10) ? (temp + 48) : (temp + 87);
        nbr /= 16;
    }
    return res;
}
