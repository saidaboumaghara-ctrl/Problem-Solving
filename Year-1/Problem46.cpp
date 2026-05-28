#include<iostream>
#include<ctime>
#include <iomanip>
#include<vector>
#include <set>
#include<cmath>
using namespace std;
int ReadPostiveNumber(string massege);
int RandomNumber(int From, int To);
void PrintFibonacciUsingLoop(int number);
int prev1 = 0, prev2 = 0;
int main()
{
	srand(time(NULL));
	PrintFibonacciUsingLoop(ReadPostiveNumber("Please enter number :) "));
    
    return 0;
}
int ReadPostiveNumber(string massege)
{
	int number = 0;
	do {
		cout << massege << endl;
		cin >> number;

	} while (number <= 0);
	return number;



}
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void PrintFibonacciUsingLoop(int number)
{
	int sum = 0;
	prev1 = RandomNumber(0, number);
	prev2 = RandomNumber(0, number);
	for (int i = 0; i < number/3; i++)
	{
		sum = prev1 + prev2;
		cout << prev1 << " " << prev2 << " "<<sum<<" ";
		prev1 = prev2 + sum;
		prev2 = prev1 + sum;
	}
	
	

}
