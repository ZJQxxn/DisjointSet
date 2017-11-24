//main.cpp : Main funtion to test two kinds of disjoint set.
#include <iostream>
#include <cstdlib>
#include "Benchmark\AdvancedTest.h"
#include "Benchmark\SimpleTest.h"
using namespace std;

int main()
{
	AdvancedTest advancedTest(1000);
	SimpleTest simpleTest(1000);

	cout << "Initial with 1000 elemnts, do 100 valid unions and 1000^10000 finds.\n";

	cout << "=================================================\n";
	cout << "Test Advanced Disjoint Set:\n";
	advancedTest.run();	

	cout << "=================================================\n";
	cout << "Test Simple Disjoint Set:\n";
	simpleTest.run();

	system("pause");
	return 0;
}