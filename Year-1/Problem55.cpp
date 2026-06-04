#include<iostream>
#include<string>
using namespace std;

void Researchaboutchar(string massege);

int main()
{
	Researchaboutchar("Please enter letter");



	return 0;
}
void Researchaboutchar(string massege)
{
	char ch;

	cout << massege << endl;
	cin >> ch;
	
	
	switch (char(tolower(ch))) {
	case 'a':
		cout << "YES letter a is vowel " << endl;
		break;
	case 'u':
		cout << "YES letter u is vowel ";
		break;
	case 'e':
		cout << "YES letter e is vowel ";
		break;
	case 'o':
		cout << "YES letter o is vowel ";
		break;
	case 'i':
		cout << "YES letter i is vowel ";
		break;
	default:
		cout << "NO the letter is not vowel ";
	}
	}
