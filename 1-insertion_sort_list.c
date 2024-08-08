#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - insertion sort
 * @list: parameter
 */
void insertion_sort_list(listint_t **list)
{
listint_t *a, *b, *c;
if (!list || !*list || !(*list)->next)
return;
a = (*list)->next;
while (a)
{
b = a->next;
while (a->prev && a->n < a->prev->n)
{
c = a->prev;
if (c->prev)
c->prev->next = a;
else
*list = a;
if (a->next)
a->next->prev = c;
c->next = a->next;
a->prev = c->prev;
a->next = c;
c->prev = a;
print_list(*list);
}
a = b;
}
}
