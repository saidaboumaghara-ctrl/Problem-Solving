//This program to fill array with max size 100 with rondom numbers 1 to 100 then copy array and print array 1 and array 2
#include <iostream>
#include<Time.h>
#include<cmath>
#include<cstdlib>
#include<string>
using namespace std;
int arr[100] = {};
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
int ReturnInput(int number)
{
	

	
	for (int i = 0; i < number; i++)
	{
		arr[i]=RandomNumbersGenerete();


	}
	cout << "Array [1]elements is   ";
	for (int i = 0; i < number; i++)
	{
		cout  << arr[i] << " ";


	}
	cout << endl;
	

	return number;

}
void sumArrayNumbers(int number)
{
	int o = 0;
	int arr2[100] = { };
	cout << "Array [2]elements is   ";
	for (int i = 0; i < number; i++)
	{
		o = arr[i];
		
		

			arr2[i] = o;



			cout  << arr2[i]<<" ";
		
}
	

}
int main()
{
    srand(time(NULL));
	sumArrayNumbers(ReturnInput(ReadPostiveNumber("Please enter your repeat number !")));


    
    return 0;
}
