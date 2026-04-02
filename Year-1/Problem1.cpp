//1234... To 4 3 2 1...
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
	while (number > 0)
	{
		remainder=number % 10;
		number = number / 10;
		cout << remainder << endl;
	}

}
int main()
{

	PrintDigits(ReadPostiveNumber("Please enter positive number"));


	return 0;
}
