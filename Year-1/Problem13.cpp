
#include <iostream>
#include <vector>
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
void MyArry(int number)
{
	int size;
	int checknum;
	int count = 0;
	
	vector<int> arr(number,size);  // مصفوفة بحجم number وجميع قيمها mynumber
	for (int i = 0; i < number; i++)
	{
		cout << "Element" << "[" << i+1 << "]" << " :";
		cin >> arr[i];
		

	}
cout << "Please enter check number\n";
cin >> checknum;
for(int i=0;i<number;i++)
if (arr[i] == checknum)
count++;

cout << "Real arry is ";
for (int o = 0; o < number; o++)
	cout << arr[o] << " ";
cout << endl;
cout << checknum<<" is repated  " << count<<" times"<<endl;
	
	


	
}

int main()
{
	MyArry(ReadPostiveNumber("please enter number (: "));
	

    return 0;
}
