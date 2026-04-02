// 5 to A BB CCC DDDD BBBBB
#include<iostream>
using namespace std;
int ascll = 65;
int ReadPostiveNumber(string massege)
{
	int number;
	do {
		cout << massege << endl;
		cin >> number;

	} while (number <= 0);
	return number;



}
void RepeatTheNumber(int number)
{
	
	
	while( ascll <= number+64)
	{
		while (number--) {
			cout <<( char)ascll;
			
			
		}
		
		
	}
}
void Repeatthenumberto1(int number)
{

	for(int i=1;i<=number;i++)
	{
		RepeatTheNumber(i);
		

		cout << endl;
		ascll++;
		

	}
}
int main()
{


	Repeatthenumberto1(ReadPostiveNumber("Please enter positive number?"));


	return 0;
}
