#pragma once
#include "iterator.h";
#include "array.h"

class array;

class array_iterator : public iiterator
{
public:
	array_iterator(array* _array, int index);
	virtual void next() override;
	virtual void prev() override;
	virtual void* get() override;
	virtual bool isEqual(iiterator* iter) override;

private:
	int _index;
	array* _array;
};