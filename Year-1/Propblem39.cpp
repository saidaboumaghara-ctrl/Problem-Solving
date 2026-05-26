#include<iostream>
#include <set>
using namespace std;
int main()
{
	set<char> letters;
	string word1;
	cin >> word1;
	for (int i = 0; i < word1.length(); i++)
	{
		letters.insert(word1[i]);


	}

	

	if (letters.size() % 2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";
	return 0;
}
