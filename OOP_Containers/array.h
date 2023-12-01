#pragma once
#include "iterable.h"

class array : public iiterable
{
public:
	array();
	~array();
	virtual iiterator* begin() override;
	virtual iiterator* end() override;
	virtual bool empty() override;
	virtual int size() override;

	void push(double el);
	void pop();

	double& operator[](int index);
private:
	double* _data;
	int _size;
	int _index = 0;
};