#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"
#include "StaticArray.h"
#include "LinkedDeque.h"
#include <vector>
using namespace std;

void main()
{
	int n = 10;
	vector<PushPopContainer<int>*> mypushpop({ new Stack<int>(), new Queue<int>(), new LinkedList<int>() });
	vector<IndexedContainer<int>*> mystaticarray({ new StaticArray<int>(n) });
	vector<Deque<int>*> mydequeue({ new LinkedDeque<int>() });
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < mypushpop.size(); j++)
			mypushpop[j]->push(i);
		for (int j = 0; j < mystaticarray.size(); j++)
			mystaticarray[j]->set(i, i);
		for (int j = 0; j < mydequeue.size(); j++)
		{
			mydequeue[j]->pushBack(i);
			mydequeue[j]->pushFront(i);
		}
	}
	for (int j = 0; j < mypushpop.size(); j++)
		cout << mypushpop[j]->toString() << endl;
	for (int j = 0; j < mystaticarray.size(); j++)
		cout << mystaticarray[j]->toString() << endl;
	for (int j = 0; j < mydequeue.size(); j++)
		cout << mydequeue[j]->toString() << endl;
	cout << "-=--------------" << endl;
	auto iter = dynamic_cast<StaticArray<int>*>(mystaticarray[0])->createIterator();
	cout << iter->next() << endl;
	iter->next();
	cout << iter->next() << endl;
	mypushpop[0]->Sort();
	mypushpop[2]->Sort();
	cout<<mypushpop[0]->toString()<<endl;
	cout << mypushpop[2]->toString() << endl;
	cout << "------------------" << endl;


	vector<PushPopContainer<string>*> arr({ new LinkedList<string>() });
	
		arr[0]->push("5");
		arr[0]->push("3");
		arr[0]->push("4");
		arr[0]->push("9");
		arr[0]->push("1");
		arr[0]->push("8");
		arr[0]->push("7");
		arr[0]->push("6");
		cout << arr[0]->toString() << endl;
	arr[0]->Sort();
		cout << arr[0]->toString() << endl;
	system("pause");

}

