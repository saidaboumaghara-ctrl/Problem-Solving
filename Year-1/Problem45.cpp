#include<iostream>
#include<ctime>
#include <iomanip>
#include<vector>
#include <set>
#include<cmath>
using namespace std;
int matrix[3][3];
int x, y=10;

void InputNumToArray(short Rows, short Cols);
void OutputNumArray(short Rows, short Cols);
void PalindromeMatrix(short Rows, short Cols);


int main()
{
   
    InputNumToArray(3, 3);
    OutputNumArray(3, 3);
    PalindromeMatrix(3, 3);

    
    return 0;
}

void InputNumToArray(short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
        {
            cin >> matrix[i][o];
         
        }
    }




}
void OutputNumArray(short Rows, short Cols)
{
    cout << "Matrix is :\n";
    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
        {

            cout << matrix[i][o] << " ";
        }
        cout << "\n";


    }
    cout << endl;



}
void PalindromeMatrix(short Rows, short Cols)
{
    bool tureorfalse = false;
    for (int i = 0; i < Rows; i++)
    {
        if (matrix[i][0] == matrix[i][2])
        {
            tureorfalse = true;

        }
        else
        tureorfalse = false;


    }

    if (tureorfalse == true)
        cout << "YES matrix is palindrome \n";
    else
        cout << "NO Matrix is not palindrome \n";
}
