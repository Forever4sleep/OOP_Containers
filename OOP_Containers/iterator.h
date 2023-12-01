#pragma once
class iiterator
{
public:
	virtual void next() = 0;
	virtual void prev() = 0;
	virtual void* get() = 0;
	virtual bool isEqual(iiterator* iter) = 0;
};		