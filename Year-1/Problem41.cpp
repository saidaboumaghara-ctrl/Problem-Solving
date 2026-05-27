#include<iostream>
#include<ctime>
#include <iomanip>
#include<vector>
using namespace std;
int matrix[3][3];
int RandomNumber(int From, int To);
void InputNumToArray(short Rows, short Cols);
void OutputNumArray(short Rows, short Cols);
void ifsparcematrix(short Rows, short Cols);
int main()
{
    srand(time(NULL));
    InputNumToArray(3, 3);
    OutputNumArray(3, 3);
    ifsparcematrix(3, 3);
   
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
            matrix[i][o] = RandomNumber(0, 1);
    }




}
void OutputNumArray(short Rows, short Cols)
{
    cout << "Matrix is :\n";
    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
        {

          cout<<matrix[i][o]<<" ";
        }
        cout << "\n";


    }




}
void ifsparcematrix(short Rows, short Cols)
{
    int count = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
        {
            if (matrix[i][o] == 0)
            {
                count += 1;
            }
            
        }
      


    }
    if (count > 4)
        cout << " YES is Sparce matrix \n";
    else
        cout << "NO is NOT \n";


}
