#include "array.h"
#include "array_iterator.h"

class array_iterator;

array::array() : _index(0), _size(5)
{
    _data = new double[5];
}

array::~array()
{
    delete[] _data;
}

iiterator* array::begin()
{
    return new array_iterator(this, 0);
}

iiterator* array::end() 
{
    return new array_iterator(this, _index);
}

bool array::empty()
{
    return _size == 0;
}

int array::size()
{
    return _size;
}

void array::push(double el)
{
    if (++_index > _size)
    {
        double* new_data = new double[_size + 5];
        for (int i = 0; i < _size; i++) new_data[i] = _data[i];

        delete[] _data;
        _data = new_data;
        _data[_index] = el;

        _size += 5;
    } 
    else _data[_index - 1] = el;
}

void array::pop()
{
    if (empty()) return;
    for (int i = 1; i <= _index; i++) _data[i - 1] = _data[i];
    _index--;
}

double& array::operator[](int index)
{
    return _data[index];
}
