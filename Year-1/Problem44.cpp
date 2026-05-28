#include<iostream>
#include<ctime>
#include <iomanip>
#include<vector>
#include <set>
#include<cmath>
using namespace std;
int matrix[3][3];
int x, y=10;

int RandomNumber(int From, int To);
void InputNumToArray(short Rows, short Cols);
void OutputNumArray(short Rows, short Cols);
void MaxandMIn(short Rows, short Cols, int num);
void Egualsnumatmatrix(short Rows, short Cols);

int main()
{
    srand(time(NULL));
    InputNumToArray(3, 3);
    OutputNumArray(3, 3);
    Egualsnumatmatrix(3, 3);

    cout << "Max number is at the array :  " << x << endl;
    cout << "Min number is at the array :  " << y << endl;
    return 0;
}

int RandomNumber(int From, int To)
{
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void InputNumToArray(short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
        {
            matrix[i][o] = RandomNumber(1, 10);
         
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
void Egualsnumatmatrix(short Rows, short Cols)
{
    int num;
    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
        {
            num = matrix[i][o];
            MaxandMIn(3, 3, num);
        }
    }


    
}
void MaxandMIn(short Rows,short Cols,int num)
{
   
   
    x=max(num,x);
    y= min(num, y);
    
 
}
