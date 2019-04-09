#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "NumberList.h"
using namespace std;

int main()
{
	/* NumberList list;

	list.insertNode(10);
	list.appendNode(40);
	list.insertNode(30);
	list.insertNode(25);
	list.deleteNode(30);

	list.displayList;

	fstream file;
	file.open("numbers.txt");

	while (file)
	{
		int i;
		file >> i;
		list.insertNode(i);
	}
	list.displayList; */

	NumberList listA, listB;
	listA.appendNode(10);
	listA.appendNode(20);
	listB.appendNode(15);
	listB.appendNode(40);
	cout << "list A before assign: " << endl;
	listA.displayList();
	cout << "list B before assign: " << endl;
	listB.displayList();
	listA = listB;	// assign B to A
	listB.appendNode(50);
	cout << "list A after assign: " << endl;
	listA.displayList();
	cout << "list B after assign: " << endl;
	listB.displayList();

	return 0;
}