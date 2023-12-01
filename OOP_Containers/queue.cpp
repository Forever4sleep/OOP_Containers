#include "queue.h"
#include "queue_iterator.h"
#include <iostream>
using namespace std;

queue::~queue()
{
	queue_node* current = _first;
	if (current == nullptr) return;
	while (current != nullptr)
	{
		queue_node* nt = current->next;
		delete current;
		current = nt;
	}
}

iiterator* queue::begin()
{
	return new queue_iterator(this, _first);
}

iiterator* queue::end()
{
	auto k = new queue_iterator(this, _last);
	k->next();
	return k;
}

bool queue::empty()
{
	return _size == 0;
}

int queue::size()
{
	return _size;
}

double& queue::operator[](int index)
{
	queue_node* current = _first;
	for (int i = 0; i < index; i++) current = current->next;
	return current->data;
}

void queue::push(double el)
{
	if (++_size == 1)
	{
		queue_node* new_f = new queue_node(el);
		_first = new_f;
	}
	else if (_size == 2)
	{
		queue_node* new_l = new queue_node(el);
		_last = new_l;
		_first->next = _last;
		new_l->prev = _first;
	}
	else
	{
		queue_node* qn = new queue_node(el);
		qn->prev = _last;
		_last->next = qn;
		_last = qn;
	}
}

void queue::pop()
{
	auto second = _first->next;
	delete _first;
	_first = second;

	_size--;
}
