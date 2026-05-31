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
    char let;
    cout << "Please enter letters \n";
    cin >> let;
    int count = 0;

    for (int i = 0; i < text.length(); i++) {
        if (let == text[i])
            count++;
    }
        cout << let << " = " << count;

}
