// 5 to EEEEE DDDD CCC BB A
#include<iostream>
using namespace std;
int ReadPostiveNumber(string massege)
{
	int number = 0;
	do {
		cout << massege << endl;
		cin >> number;

	} while (number <= 0);
	return number;



}
void RepeatTheNumber(int number)
{
	for (int i = 1; i <= number; i++)
	{
		char ascll = number+64;
		cout << ascll;


	}

}
void Repeatthenumberto1(int number)
{
	
	while (number)
	{
		RepeatTheNumber(number);
		cout << endl;
		
		number = number - 1;

	}
}
int main()
{
	
	
	Repeatthenumberto1(ReadPostiveNumber("Please enter positive number?"));
	

	return 0;
}
