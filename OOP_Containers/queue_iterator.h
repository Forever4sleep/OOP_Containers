#pragma once
#include "iterator.h"
#include "queue.h"

class queue_iterator : public iiterator
{
public:
	queue_iterator(queue* q, queue_node* qn);
	virtual void next() override;
	virtual void prev() override;
	virtual void* get() override;
	virtual bool isEqual(iiterator* iter) override;
private:
	queue* _queue;
	queue_node* current_node;
};