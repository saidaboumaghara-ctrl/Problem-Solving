#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include <cctype>
#include <set>
#include<string>
using namespace std;

int main()
{
	string word;
	getline(cin, word);
	string result = "";
	word.pop_back();
	word.erase(word.begin());
	

	
	for (int i = 0; i < word.length(); i=i+3)
	{

		result+= word[i];


	}
	

	


	set<char>arr;

	for (int i = 0; i < result.length(); i++)
	{
		arr.insert(result[i]);


	}
	cout << arr.size();


	return 0;
};
