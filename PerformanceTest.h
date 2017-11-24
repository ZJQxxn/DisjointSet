//PerformanceTest.h : Definition of abstract class to test performance of two disjoint set class.
#ifndef PERFORMANCETEST_H
#define PERFORMANCETEST_H
#include <ctime>
#include "../DataStructure/DisjointSet.h"
using namespace std;

//abstract class:'PerformanceTest'
class PerformanceTest
{
protected:
	DisjointSet* disSet;
	int size;
	long double uniontime;
	long double findTime;
public:
	//constructor
	PerformanceTest(int initialsize = 2);
	//operations
	void testUnion();
	void testFind();
	void run();
};
#endif