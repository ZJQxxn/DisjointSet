//AdvancedTest.h : Definition of class to test advanced disjoint set.
#ifndef ADVANCEDTEST_H
#define ADVANCEDTEST_H

#include "PerformanceTest.h"
#include "../DataStructure/AdvancedDisSet.h"

//class:'AdvancedTest'
class AdvancedTest:public PerformanceTest
{
public:
	AdvancedTest(int initialSize = 2)
		:PerformanceTest(initialSize)
	{
		disSet = new AdvancedDisSet(size);
	}
};
#endif