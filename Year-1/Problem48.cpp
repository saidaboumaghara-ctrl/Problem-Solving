#include<iostream>
#include<ctime>
#include <iomanip>
#include<vector>
#include <set>
#include<cmath>
#include <string>
using namespace std;
string Readastring();
void spaceatstring(string text);
int main()
{
    string nam = Readastring();
    spaceatstring(nam);
    
    return 0;
}
string Readastring()
{
    string text;
    cout << "Please enter your strings\n";
    getline(cin,text);


    return text;

}
void spaceatstring(string text)
{
    cout << "String after conversion" << endl;
    for (int i = 0; i < text.length(); i++)
    {
        text[0] = toupper(text[0]);
        if (text[i] == ' ')
            text[i+1]=toupper(text[i + 1]);
            cout << text[i];
    }





}
