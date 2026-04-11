//This program read number and create a rondom number  and search a number his adress in the array
#include <iostream>
#include<cmath>
#include<vector>
#include<cstdlib>
using namespace std;
int array1[100] = {};
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
	int randomNum = rand() % 100;
	return randomNum;
}
void Array1input(int number)
{
	
	for (int i = 0; i < number; i++)
	{
		array1[i] = RandomNumbersGenerete();

	}
	
	cout << "Array 1 elements is : ";
	for (int j = 0; j < number; j++)
		cout << array1[j]<<" ";
	cout << endl;


}
int  ReadSearchNumber(string massege)
{
	int searchnum;
	cout << massege << endl;
	cin >> searchnum;
	return searchnum;
}
void SearchaNumber(int searchnum)
{
	for (int i = 0; i < searchnum; i++)
	{
		if (array1[i] == searchnum)
		{
			cout << "Number you are looking for is  :" << array1[i] << endl;
			cout << "The number found at postion  :" << i << endl;
			cout << "The number found its order  :" << i + 1 << endl;
	 }


    }
}



int main()
{
    srand(time(NULL));
	Array1input(ReadPostiveNumber("Please enter number !"));
	SearchaNumber(ReadSearchNumber("Please enter your search number !"));
    return 0;
}
