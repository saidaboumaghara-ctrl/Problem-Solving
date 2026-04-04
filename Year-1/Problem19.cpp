//output random of numbers and get the array print a prime numbers
#include <iostream>
#include<Time.h>
#include<cmath>
#include<cstdlib>
#include<string>
using namespace std;
int arr[100] = {};
int arr2[100] = {};
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
int copyArrayNumbers(int number)
{
	int o = 0;
	
	cout << "Array [2]elements is   ";
	for (int i = 0; i < number; i++)
	{
		o = arr[i];
		
		

			arr2[i] = o;



			cout  << arr2[i]<<" ";
		
}
	cout << endl;
	
	return number;
}
void primeorno(int number) {
	bool x=0;
	for (int o = 0; o < number; o++) {
		for (int i = 2; i <= (int)sqrt((double)arr2[o]); i++) {
			
			if (arr2[o] % i == 0)
			{
				x = false;
				break;
			}
			else if(arr2[o]==2)
			x = true;
			x = true;
		}
		
		if (x==1)
			cout << arr2[o]<<" ";

	}
		
}
int main()
{
    srand(time(NULL));
	primeorno(copyArrayNumbers(ReturnInput(ReadPostiveNumber("Please enter your repeat number !"))));
	

    
    return 0;
}
