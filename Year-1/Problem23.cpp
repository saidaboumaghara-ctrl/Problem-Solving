// The elements of array 1 for this program, their inversion, and then storage in another array
#include <iostream>
#include<cmath>
#include<vector>
#include<cstdlib>
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
int  RandomNumbersGenerete(int number)
{
	int randomNum = rand() % number+1;
	return randomNum;
}
void ArrayOne(int number)
{
	vector<int>arr2(number);
	vector<int>arr1(number);
	for (int i = 0; i < number; i++)
	{

		arr1[i] = RandomNumbersGenerete(number);

	}
	cout << "Array 1 is : ";
	for (int i = 0; i < number; i++)
	{
		cout << " " << arr1[i];
	}
	
	for (int i = 0; i < number; i++)
	{

			arr2[i] = arr1[number - 1-i];
			
		
		
	}
	cout << endl<<"Array 2 is : ";
	for (int i = 0; i < number; i++)
	{
		cout << " " << arr2[i];
	}
}
int main()
{
    srand(time(NULL));
	ArrayOne(ReadPostiveNumber("Please enter your number !"));
	
    return 0;
}
