//This program want enter numbers and program writen random of numbers
#include <iostream>
#include<Time.h>
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
int  RandomNumbersGenerete()
{
	int randomNum = rand() % 101;
	return randomNum;
}
void ReturnInput(int number)
{

	int arr[100] = {};
	for (int i = 0; i < number; i++)
	{
		arr[i]=RandomNumbersGenerete();


	}
	
	for (int i = 0; i < number; i++)
	{
		cout << arr[i]<<" ";


	}





}



int main()
{
    srand(time(NULL));
	ReturnInput(ReadPostiveNumber("Please enter your repeat number !"));


    
    return 0;
}p
