//SimpleDisSet.cpp : Implementations of class:'SimpleDisSet'
#include "SimpleDisSet.h"


//Constructor
SimpleDisSet::SimpleDisSet(const int initialsize)
	:DisjointSet(initialsize)
{
	
}


//overrides
/*
	Union two disjoint sets given roots of them.
	Return true if successfully union.
*/
bool SimpleDisSet::Union(const int firstRoot, const int secondRoot)
{
	if (firstRoot < size && secondRoot < size)
	{
		if (elements[secondRoot] == -1 && elements[firstRoot] == -1)
		{
			elements[secondRoot] = firstRoot;
			return true;
		}
	}
	return false;
}

/*
	Given an element, find its root.
*/
const int SimpleDisSet::find(const int ele)
{
	if (ele < size)
	{
		int root = ele;
		while (elements[root] != -1)
		{
			root = elements[root];
		}
		return root;
	}
	return -1;
}
