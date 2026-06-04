#include<iostream>
#include<string>
using namespace std;
string Enterasentenc(string massege);
void Researchaboutchar(string sentence, string massege);

int main()
{
	Researchaboutchar(Enterasentenc("Please enter number "), "Please enter letter");



	return 0;
}
string Enterasentenc(string massege)
{
	string sentence;
	cout << massege << endl;
	getline(cin, sentence);

		return sentence;

}
void Researchaboutchar(string sentence,string massege)
{
	char ch;
	int count = 0;
	int count2 = 0;
	cout << massege << endl;
	cin >> ch;
	for (int i = 0; i < sentence.length(); i++)
	{
		if (sentence[i] == ch)
			count++;
	 if (sentence[i] == char(toupper(ch)))
			count2++;


	}
	char harf;
	cout << "In your sentence : " << endl;
	cout << " small leters is : " << ch << "   = " << count << endl;
	if (ch == char(toupper(ch)))
		 harf = tolower(ch);
	else if (ch == char(tolower(ch)))
		harf = toupper(ch);
	cout << " big leters is : "<< ch<<"+" << harf<< "   = " << count + count2 << endl;




}
