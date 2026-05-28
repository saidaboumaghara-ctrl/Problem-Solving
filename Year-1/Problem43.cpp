#include<iostream>
#include<ctime>
#include <iomanip>
#include<vector>
#include <set>
using namespace std;
int matrix[3][3];
int matrix2[3][3];
set<int>numbers;
int RandomNumber(int From, int To);
void InputNumToArray(short Rows, short Cols);
void OutputNumArray(short Rows, short Cols);
void EhualsinTheArray(short Rows, short Cols, int num);
void Egualsnumatmatrix(short Rows, short Cols);
int main()
{
    srand(time(NULL));
    InputNumToArray(3, 3);
    OutputNumArray(3, 3);
    Egualsnumatmatrix(3, 3);

    for (int x : numbers)
    {
        cout << x << " ";
    }

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
            matrix2[i][o] = RandomNumber(1, 10);
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

    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
        {

            cout << matrix2[i][o] << " ";
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
            EhualsinTheArray(3, 3, num);
        }
    }


    
}
void EhualsinTheArray(short Rows,short Cols,int num)
{
   
    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
        {
            if (matrix2[i][o] == num)
            {
                
                numbers.insert(num);
              
            }
           
        }
    }


    
}
