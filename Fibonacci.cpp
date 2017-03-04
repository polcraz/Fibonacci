// Fibonacci.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int fib(int n)
{
	if (n == 0) { return 0; }
	else
	{
		if ((n == -1) || (n == 1)) { return 1; }
		else
		{
			if (n > 0) { return fib(n - 1) + fib(n - 2); }
			else { return fib(n + 2) - fib(n + 1); }
		}
	}
}
int main()
{
	int N;
	cin >> N;
	cout << fib(N) << endl;
	system("pause");
	return 0;
}
