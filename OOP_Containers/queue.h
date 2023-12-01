#pragma once
#include "iterable.h"
#include "queue_node.h"
class queue_iterator;
class queue : public iiterable
{
public:
	~queue();

	virtual iiterator* begin();
	virtual iiterator* end();
	
	virtual bool empty() override;
	virtual int size() override;

	double& operator[](int index);

	void push(double el);
	void pop();
private:
	queue_node* _first;
	queue_node* _last;
	int _size = 0;
};