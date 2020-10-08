#include "libmx.h"

void mx_pop_back(t_list **list) {
    t_list *node = *list;
    t_list *prev = *list;

    if (*list == 0)
        return;
    if ((*(list))->next == 0) {
        free(*list);
        *list = 0;
        return;
    }
    while (1) {
        if (node->next == 0) {
            prev->next = 0;
            free(node);
            return;
        }
        prev = node;
        node = node->next;
    }
}
