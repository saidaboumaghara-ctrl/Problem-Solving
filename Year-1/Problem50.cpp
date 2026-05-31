#include<iostream>
#include<ctime>
#include <iomanip>
#include<vector>
#include <set>
#include<cmath>
#include <string>
using namespace std;
char Readastring();
void spaceatstring(char text);
int main()
{
    char nam = Readastring();
    spaceatstring(nam);
    
    return 0;
}
char Readastring()
{
    char text;
    cout << "Please enter your strings\n";
    cin >> text;


    return text;

}
void spaceatstring(char text)
{
    cout << "carecter after conversion " << endl;
    if (char(text) > 64 && char(text) < 91)
        cout << char(text + 32);
    else
        cout << char(text -32);


}
