#include<iostream>
#include<ctime>
#include <iomanip>
#include<vector>
#include <set>
#include<cmath>
#include <string>
#include<algorithm>
using namespace std;
string Readastring();
void reversesentence(string text);
int main()
{
    string nam = Readastring();
    reversesentence(nam);

    return 0;
}
string Readastring()
{
    string text;
    cout << "Please enter your strings\n";
    getline(cin, text);


    return text;

}
void reversesentence(string text)
{
    int end = text.length();

    for (int i = text.length() - 1; i >= 0; i--)
    {
        if (text[i] == ' ')
        {
            for (int j = i + 1; j < end; j++)
            {
                cout << text[j];
            }
            cout << " ";
            end = i;
        }
    }

    for (int j = 0; j < end; j++)
    {
        cout << text[j];
    }

}
