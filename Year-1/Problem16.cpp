//This program to fill array with max size 100 with rondom numbers 1 to 100 then print min
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
	cout << "Array elements is   ";
	for (int i = 0; i < number; i++)
	{
		cout << arr[i]<<" ";


	}
	cout << endl;
	

	return number;

}
void minNumberofArray(int number)
{
	int	min = 100;
	for (int i = 0; i < number;i++)
	{
		
			if(arr[i]<min)
			min= arr[i];

}
	cout << "Max number is  " << min;

}
int main()
{
    srand(time(NULL));
	minNumberofArray(ReturnInput(ReadPostiveNumber("Please enter your repeat number !")));


    
    return 0;
}
