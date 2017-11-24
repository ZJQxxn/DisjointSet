//AdvancedDisSet.cpp : Implementations of class:'AdvancedDisSet'
#include "AdvancedDisSet.h"


//Constructor
AdvancedDisSet::AdvancedDisSet(const int initialSize)
	:DisjointSet(initialSize)
{
	counts = new int[size];
	for (int i = 0; i < size; i++)
	{
		counts[i] = 1;
	}
}


//overrides
/*
	Union two disjoint set given their roots.
*/
bool AdvancedDisSet::Union(const int firstRoot, const int secondRoot)
{
	if (firstRoot < size && secondRoot < size)
	{
		if (elements[secondRoot] == -1 && elements[firstRoot] == -1)
		{
			int temp = counts[firstRoot] + counts[secondRoot];
			//consider the root with more nodes as new root
			if (counts[firstRoot] > counts[secondRoot])
			{
				elements[secondRoot] = firstRoot;
				counts[firstRoot] = temp;
			}
			else
			{
				elements[firstRoot] = secondRoot;
				counts[secondRoot] = temp;
			}
			return true;
		}
	}
	return false;
}

/*
	Find an element given its value.
*/
const int AdvancedDisSet::find(const int ele)
{
	if (ele < size)
	{
		int root = ele;
		//Find root of 'ele'
		while (elements[root] != -1)
		{
			root = elements[root];
		}

		//Traverse all the nodes on the path from 'ele' 
		//to the overall root and change their root to
		//the overall root
		int current = ele;
		while (elements[current] != -1)
		{
			int temp = elements[current];
			elements[current] = root;
			current = temp;
		}

		return root;
	}

	return - 1;
}