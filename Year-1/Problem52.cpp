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
    int countlower = 0;
    int countupper = 0;
    cout << "This string : " << endl;
    cout << "string length :   " << text.length()<<endl;

    for (int i = 0; i < text.length(); i++) {
        if (char(text[i]) > 64 && char(text[i]) < 91)
            countupper++;
        else if (char(text[i]) > 96 && char(text[i]) < 123)
            countlower++;
    }
    cout << "Capital letters count :  " << countupper << endl;
    cout << "Small letters count :  " << countlower << endl;

}
