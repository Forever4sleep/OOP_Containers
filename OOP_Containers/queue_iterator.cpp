#include "queue_iterator.h"
#include "queue.h"
#include <iostream>

class queue;

queue_iterator::queue_iterator(queue* q, queue_node* qn) : _queue(q), current_node(qn) {}

void queue_iterator::next()
{
    current_node = current_node->next;
}

void queue_iterator::prev()
{
    current_node = current_node->prev;
}

void* queue_iterator::get()
{
    return &current_node->data;
}

bool queue_iterator::isEqual(iiterator* iter)
{
    queue_iterator* i = (queue_iterator*)iter;
    return i != nullptr && _queue == i->_queue && current_node == i->current_node;
}
