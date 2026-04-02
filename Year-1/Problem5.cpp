//This code for Counting the number of times the same number appears within the numbers
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
int PrintDigits(int number) 
{
	int remainder = 0;

		remainder = number % 10;
		
		
	
	return remainder;
}
void countDigits(int number)
{
	int counts[10] = { 0 };

	while (number > 0)
	{
	
	
	int remainder = PrintDigits(number);
	counts[remainder]++;
	number = number / 10;

}
	cout << "The number is" << endl;
	for (int i = 1; i <= 9; i++)
	{
		if (counts[i] > 0)
			cout << "We have this number" << i << "|||" << counts[i] << endl;

	}

}
int main()
{
	countDigits(ReadPostiveNumber("Please enter the number!"));






	return 0;
};
