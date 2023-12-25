// Fibonacci_seq.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int fibonacci(int n); //prototype of fibonacci function

int main()
{
	int fib{};
	int n{};

	cout << "Enter number of terms you want in the sequence: ";
	cin >> n;
	for(int i=0; i<=n; i++)
	cout<<fibonacci(i)<<" ";
	
	
}

int fibonacci(int n)
{
	
	if (n <= 1)
		return n;
		return  fibonacci(n - 1) + fibonacci(n - 2);
}

