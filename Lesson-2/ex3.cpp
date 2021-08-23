#include <iostream>

using namespace std;

int main()
{
	char op;
	int num1,num2;
	
	cout <<"Enter first number ";
	cin >> num1;
	cout <<"Enter second number ";
	cin >> num2;
	cout <<"Enter anyone operator from list - +, -, *, / ---- ";
	cin >> op;
	
	switch(op)
	{
		case '+':
		cout <<num1 + num2 <<endl;
		break;
		
		case '-':
		cout <<num1 - num2 <<endl;
		break;
		
		case '*':
		cout <<num1 * num2 <<endl;
		break;
		
		case '/':
		cout <<num1 / num2 <<endl;
		break;
		
		default:
		cout <<"Invalid operator" <<endl;
		break;
	}
	return 0;
}
