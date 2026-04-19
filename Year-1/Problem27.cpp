//odd numbers in array
#include<iostream>
#include<string>
#include<set>
#include<vector>
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
vector<int> ArrayReadTheNum(int number)
{
	
	vector<int>array(number);

	for (int i = 0; i < number; i++)
	{
		cin >> array[i];
 
    }


	return array ;
}
int ifnumOdd(vector<int>array)
{
	int count = 0;
	for (int i = 0; i < array.size(); i++)
	{
		if (array[i] % 2 != 0)
			count++;



    }


	return count;


}


int main()
{
	int count = ifnumOdd(ArrayReadTheNum(ReadPostiveNumber("Please enter your number ?")));

	cout << " odd numbers in the array is" << " " << count << endl;











	return 0;
}
