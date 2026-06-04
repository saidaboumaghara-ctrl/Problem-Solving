#include<iostream>
#include<ctime>
#include <iomanip>
#include<vector>
#include <set>
#include<cmath>
#include <string>
using namespace std;
string Readastring();
void spaceatstringtovowels(string text);
int main()
{
    string nam = Readastring();
    spaceatstringtovowels(nam);

    return 0;
}
string Readastring()
{
    string text;
    cout << "Please enter your strings\n";
    getline(cin, text);


    return text;

}
void spaceatstringtovowels(string text)
{

    
    
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ')
            cout << text[i];
        else
            cout << endl;

   
    }
   
}
