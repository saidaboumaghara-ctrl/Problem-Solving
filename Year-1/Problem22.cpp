//This programme is designed to generate random numbers, store them in an array, and then sort the array in ascending order to store these numbers.
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
void ArrayTwo(vector<int>& arr1, int number)
{
	vector<int>arr2(number);
	cout << "Array elements before :)";
	for (int i = 0; i < number; i++)
	{
		cout << " " << arr1[i];
		arr2[i] = arr1[i];
	}
	cout << endl;

	cout << "Array elements after :)";
	for (int i = 0; i < number - 1; i++)
	{
		for (int j = i + 1; j < number; j++)
		{
			if (arr2[i] > arr2[j])
			{
				int temp = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = temp;
			}
		}
	}
	for (int i = 0; i < number; i++)
	{
		cout << arr2[i] << " ";
	}
}
void ArrayOne(int number)
{
	vector<int>arr1(number);
	for (int i = 0; i < number; i++)
	{
		
	arr1[i]=RandomNumbersGenerete(number);

    }
	ArrayTwo(arr1, number);
}
int main()
{
    srand(time(NULL));
	ArrayOne(ReadPostiveNumber("Please enter your number !"));
	
    return 0;
}
