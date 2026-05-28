#include<iostream>
#include<ctime>
#include <iomanip>
#include<vector>
#include <set>
#include<cmath>
using namespace std;
int ReadPostiveNumber(string massege);
int RandomNumber(int From, int To);
void PrintFibonacciUsingLoop(int number,int prev1,int prev2);
int prev1 = 0, prev2 = 0;
int sum = 0;
int main()
{
	srand(time(NULL));
	int num = ReadPostiveNumber("Please enter number :) ");
	PrintFibonacciUsingLoop(num, RandomNumber(0, 100), RandomNumber(0, 100));
    
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
void PrintFibonacciUsingLoop(int number,int prev1,int prev2)
{
	
	

	if (number > 0)
	{
		sum = prev1 + prev2;
		cout << prev1 << " " << prev2 << " " << sum << " ";
		prev1 = prev2 + sum;
		prev2 = prev1 + sum;
		PrintFibonacciUsingLoop(number/3 , prev1, prev2);
	}
	

}
