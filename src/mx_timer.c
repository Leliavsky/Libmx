#include "libmx.h"

double mx_timer(void(*f)()) {
    clock_t start = clock();
    f();
    clock_t stop = clock();
    return (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
}
