//PerformanceTest.cpp : Implementations of class:'PerformanceTest'
#include "PerformanceTest.h"
#include <random>
#include <Windows.h>
using namespace std;


//constructor
PerformanceTest::PerformanceTest(int initialSize)
	:disSet(nullptr)
	, size((initialSize >= 2) ? initialSize : 2)
	, uniontime(0)
	, findTime(0)
{

}


//operations
/*
	Randomly do union for total 10000 times, if the union isn't successful,
	do it again until reach at 10000 times.
*/
void PerformanceTest::testUnion()
{
	srand(time(0));
	int totalTimes = 0;
	while (totalTimes != 100)
	{
		LARGE_INTEGER nFreq, begin, end;
		QueryPerformanceFrequency(&nFreq);
		QueryPerformanceCounter(&begin);
		int firstRoot = rand() % size;
		int secondRoot = rand() % size;
		bool flag = disSet->Union(firstRoot, secondRoot);
		QueryPerformanceCounter(&end);

		if (flag)
		{
			totalTimes++;
			uniontime += (end.QuadPart - begin.QuadPart) / (double)nFreq.QuadPart;
		}
	}
}

/*
	Randomly do find for total 'size' times.
*/
void PerformanceTest::testFind()
{
	srand(time(0));
	for (int i = 0; i < size*10000; i++)
	{
		LARGE_INTEGER nFreq, begin, end;
		QueryPerformanceFrequency(&nFreq);
		QueryPerformanceCounter(&begin);
		int index = rand() % size;
		disSet->find(index);
		QueryPerformanceCounter(&end);
		findTime += (end.QuadPart - begin.QuadPart) / (double)nFreq.QuadPart;
	}
}

/*
	Run test and print performance of each operation.
*/
void PerformanceTest::run()
{
	testUnion();
	cout << "Union Time : " << uniontime << " ¦Ìs." << endl;

	testFind();
	cout << "Find Time :" << findTime  << " ¦Ìs." << endl;
}