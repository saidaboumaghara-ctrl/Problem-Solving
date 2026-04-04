//This program sum of array1 and array2 to array 3 and print this
#include <iostream>
#include<Time.h>
#include<cmath>
#include<cstdlib>
#include<string>
using namespace std;
int arr[100] = {};
int arr2[100] = {};
int arr3[100] = {};
int ReadPostiveNumber(string massege)
{
	int number = 0;
	do {
		cout << massege << endl;
		cin >> number;

	} while (number <= 0);
	return number;



}
int  RandomNumbersGenerete()
{
	int randomNum = rand() % 101;
	return randomNum;
}
int  RandomNumbersGenerete2()
{
	int randomNum = rand() % 101;
	return randomNum;
}
int ReturnInput(int number)
{
	

	
	for (int i = 0; i < number; i++)
	{
		arr[i]=RandomNumbersGenerete();


	}
	for (int o = 0; o < number; o++)
	{

		arr2[o] = RandomNumbersGenerete2();

	}
	cout << "Array [1]elements is   ";
	for (int i = 0; i < number; i++)
	{
		cout  << arr[i] << " ";


	}
	cout << endl;
	cout << "Array [2]elements is   ";
	for (int o = 0; o < number; o++)
	{
		cout << arr2[o] << " ";


	}
	cout << endl;


	return number;

}
void sumOfarray(int number)
{
	for (int i = 0; i < number; i++)
	{
		arr3[i]=arr[i] + arr2[i];

		cout << arr3[i] << " ";

}



}




int main()
{
    srand(time(NULL));
	sumOfarray(ReturnInput(ReadPostiveNumber("Please enter your repeat number !")));
	

    
    return 0;
}
