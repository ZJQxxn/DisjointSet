//SimpleDisSel.h : Definition of a simple disjoi set 
//				derived from abstract class:'DisjointSet'
#ifndef SIMPLEDISSET_H
#define SIMPLEDISSET_H

#include "DisjointSet.h"

//class:'SimpleDisSet'
//see implementation in SimpleDisSet.cpp
class SimpleDisSet :public DisjointSet
{
public:
	SimpleDisSet(const int initialSize = 2);

	//overrides
	bool Union(const int firstRoot, const int secondRoot);
	const int find(const int ele);
};
#endif