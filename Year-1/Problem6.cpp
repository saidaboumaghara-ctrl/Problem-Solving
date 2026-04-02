// A program that reverses a number, writing it backwards from top to bottom

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

int ReverseNumber(int number) {
	int reversed = 0;

	while (number > 0) {
		reversed = reversed * 10 + (number % 10);
		number = number / 10;
	}
	return reversed;
}

void PrintDigits(int number)
{
	int remainder = 0;
	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		cout << remainder << endl;
	}
	
}
	

int main()
{
PrintDigits(ReverseNumber(ReadPostiveNumber("Please enter the number!")));
	
	





	return 0;
};
