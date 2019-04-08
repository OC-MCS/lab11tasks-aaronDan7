#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "NumberList.h"
using namespace std;

int main()
{
	NumberList list;

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
		list.insertNode;
	}
	list.displayList;


	return 0;
}