#pragma once
#include "iterator.h"

class iiterable
{
public:
	virtual iiterator* begin() = 0;
	virtual iiterator* end() = 0;
	virtual bool empty() = 0;
	virtual int size() = 0;
};