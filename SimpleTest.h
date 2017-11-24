//SimpleTest.h : Definition of class to test simple disjoint set.
#ifndef SIMPLETEST_H
#define SIMPLETEST_H

#include "PerformanceTest.h"
#include "../DataStructure/SimpleDisSet.h"

//class:'Simpletest'
class SimpleTest:public PerformanceTest
{
public:
	SimpleTest(int initialSize = 2)
		:PerformanceTest(initialSize)
	{
		disSet = new SimpleDisSet(size);
	}
};
#endif