#include "libmx.h"

void mx_push_back(t_list **list, void *data){
    t_list *head = NULL;

    if(NULL == (*list)){
        (*list) = mx_create_node(data);
        return;
    }
    head = *list;

    while (head->next != NULL)
        head = head->next;

    head->next = mx_create_node(data);
}
