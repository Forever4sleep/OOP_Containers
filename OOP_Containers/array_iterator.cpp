#include "array_iterator.h"
#include "array.h"

class array;

array_iterator::array_iterator(array* arr, int index) : _array(arr), _index(index) {}

void array_iterator::next()
{
    _index++;
}

void array_iterator::prev()
{
    _index--;
}

void* array_iterator::get()
{
    return &_array[0][_index];
}

bool array_iterator::isEqual(iiterator* iter)
{
    array_iterator* it = (array_iterator*)iter;
    return it != nullptr && it->_index == _index && it->_array == _array;
}
