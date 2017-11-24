//AdvancedDisSet.h : Definition of an advanced disjoint set
//				derived from abstract class:'DisjointSet'
#ifndef ADVANCEDDISSET_H
#define ADVANCEDDISSET_H

#include "DisjointSet.h"

//class:'AdvancedDisSet'
//see implementations in AdvancedDisSet.cpp
class AdvancedDisSet :public DisjointSet
{
private:
	int* counts;
public:
	AdvancedDisSet(const int initialSize = 2);

	//overrides
	virtual bool Union(const int firstRoot, const int secondRoot);
	virtual const int find(const int ele);
};

#endif