#include <iostream>

using namespace std;

double quotient(int a, int b)
{
	double res = a / b;
	return res;
}

int main()
{
	double ans = quotient(5,3);
	cout <<"Answer is " <<ans <<endl;
	return 0;
}
