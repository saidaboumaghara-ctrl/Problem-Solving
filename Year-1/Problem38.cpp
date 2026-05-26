#include<iostream>
using namespace std;
int main()
{
	string word1;
	string word2;
	cin >> word1;
	cin >> word2;
	if (word1.length() == word2.length())
	{
		for (int i = 0; i < word1.length(); i++)
		{
			if (toupper(word1[i]) == toupper(word2[i]))
			{
		

			}
			else if (toupper(word1[i]) < toupper(word2[i]))
			{
			
			cout << -1;
			return 0;
		    }
			else
			{
				cout << 1;
				return 0;
			}
			
		}
		cout << 0;
	}
	return 0;
}
