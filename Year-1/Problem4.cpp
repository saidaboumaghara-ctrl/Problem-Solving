//this program for 1234 to 4321 but 4321 is one number not reserve
#include<iostream>
#include<string>
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
void PrintDigits(int number)
{
	int remainder = 0;
	int number2 = 0;
	while (number > 0)
	{
		remainder=number % 10;
		number = number / 10;
		number2 = number2 * 10 + remainder;
		
	}
	cout << number2;
	
}
int main()
{

	PrintDigits(ReadPostiveNumber("Please enter positive number"));


	return 0;
}
