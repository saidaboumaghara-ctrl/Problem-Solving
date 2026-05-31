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
    getline(cin, text);


    return text;

}
void spaceatstring(string text)
{
    cout << "carecter after conversion " << endl;
    for (int i = 0; i < text.length(); i++) {
        if (char(text[i]) > 64 && char(text[i]) < 91)
            cout << char(text[i] + 32);
        else if (text[i] == ' ')
            cout << " ";
        else
            cout << char(text[i]-32);

    }
}
