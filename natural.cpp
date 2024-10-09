// CPP Program to find the sum of fifth powers
// of first n natural numbers
#include <bits/stdc++.h>
using namespace std;

// calculate the sum of fifth power of
// first n natural numbers
long long int fifthPowerSum(int n)
{
	long long int sum = 0;
	for (int i = 1; i <= n; i++)
		sum = sum + (i * i * i * i * i);
	return sum;
}

// Driven Program
int main()
{
	int n = 6;
	cout << fifthPowerSum(n) << endl;
	return 0;
}
