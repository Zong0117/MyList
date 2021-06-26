#include <iostream>
//#include "MyList.h"
#include "DouList.h"
using namespace std;

int main()
{
	/*LinkList l;
	l.insert(1,1);
	l.insert(2,2);
	l.insert(3,3);
	l.insert(4,4);
	l.print();
	l.insertH(5);
	l.print();
	l.pop(1);
	l.print();
	l.reverse();
	l.print();*/
	cout << "///////////////////" << endl;
	DoubleLinkList dl;
	dl.insert(1, 1);
	dl.insert(2, 2);
	dl.insert(3, 3);
	dl.insert(4, 4);
	dl.print();
	dl.insertH(0);
	dl.print();
	dl.pop(1);
	dl.print();
	dl.rprint();
}