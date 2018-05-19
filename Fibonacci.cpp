// Fibonacci.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int fib(int n)
{
	return round((pow((1+sqrt(5))/2, n) / sqrt(5)));
}
int main()
{
	int N;
	cin >> N;
	cout << fib(N) << endl;
	system("pause");
	return 0;
}
