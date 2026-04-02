
#include<iostream>    //perfet number 1 to N
using namespace std;
enum IsPerfectOrNo {perfect=1, notperfect=0};
int enteryournumber()
{
	int num;
	cout << "Please enter your number?\n";
	cin >> num;
	return num;
}
int CheckPerfectnumber(int num)
{
	int x = 0;
	for (int i = 1; i < num; i++)
		if (num % i == 0) {
				x += i;


		}
	if (x == num)
		return IsPerfectOrNo::perfect;
	else
	return IsPerfectOrNo::notperfect;
}
void perfectnumbers(int num)
{
	for (int i = 1; i <num; i++)
	{
		if (CheckPerfectnumber(i))
			cout << i<< endl;
		
	}

}
int main()
{
	int num=enteryournumber();
	perfectnumbers(num);




	return 0;
}
