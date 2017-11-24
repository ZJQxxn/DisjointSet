//DisjointSet.h : Definition of an abstract class to implement disjoint set.
#ifndef DISJOINTSET_H
#define DISJOINTSET_H
#include <iostream>
using std::cout;
using std::endl;

//class:'DisjointSet'
class DisjointSet
{
protected:
	int* elements;
	int size;
public:
	//Constructor
	DisjointSet(const int initialSize = 2)
	{
		size = (initialSize >= 2) ? initialSize : 2;
		elements = new int[size];
		for (int i = 0; i < size; i++)
		{
			elements[i] = -1;
		}
	}

	//virtual functions
	virtual bool Union(const int firstRoot, const int secondRoot) = 0;
	virtual const int find(const int ele) = 0;
	
	//other operations
	void show()
	{
		cout << "Elements in disjoint set:\n";
		cout << "elements\t";
		for (int i = 0; i < size; i++)
		{
			cout << i << '\t';
		}
		cout << "\nparent\t\t";
		for (int i = 0; i < size; i++)
		{
			cout << elements[i] << '\t';
		}
		cout << endl;
	}
};
#endif