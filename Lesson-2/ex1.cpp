#include <iostream>

using namespace std;

void product(int add, int minus)
{
	cout <<"Addition is " <<add <<endl;
	cout <<"subtraction is "<<minus <<endl;
}

int main()
{
	int num1 = 10, num2 = 5;
	int plus = num1 + num2;
	int sub = num1 - num2;
	product(plus,sub);
	return 0;
}
