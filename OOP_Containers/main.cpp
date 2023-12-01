#include "queue.h"
#include "queue_iterator.h"
#include "array.h"
#include <iostream>

using namespace std;

int main()
{
	::array a; queue b;
	a.push(1.2); a.push(2.3); a.push(13.7); a.push(0.5);
	b.push(1.2); b.push(2.3); b.push(13.7); b.push(0.5);

	for (iiterator* i = a.begin(); !i->isEqual(a.end()); i->next())
		cout << *(double*)i->get() << " ";
	cout << endl;

	for (iiterator* i = b.begin(); !i->isEqual(b.end()); i->next())
		cout << *(double*)i->get() << " ";
	cout << endl;

	/*a.pop();
	a.push(5.5);
	for (iiterator* i = a.begin(); !i->isEqual(a.end()); i->next())
		cout << *(double*)i->get() << " ";*/
	
	cout << endl;
}