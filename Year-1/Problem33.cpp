#include<iostream>
#include<ctime>
#include <iomanip>
#include<vector>
using namespace std;
int matrix[3][3];
int matrix2[3][3];
int matrix3[3][3];
int RandomNumber(int From, int To);
void InputNumToArray(short Rows, short Cols);
void InputnumToarray2(short Rows, short Cols);
void OutputNumArray(short Rows, short Cols);
void MultiArray(short Rows, short Cols);
int main()
{
    srand(time(NULL));
    InputNumToArray(3, 3);
    InputnumToarray2(3, 3);
    OutputNumArray(3, 3);
    MultiArray(3, 3);
	return 0;
}
int RandomNumber(int From, int To)
{
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void InputNumToArray(short Rows,short Cols)
{
   
    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
            matrix[i][o] = RandomNumber(1, 10);
    }


   

}
void InputnumToarray2(short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
            matrix2[i][o] = RandomNumber(1, 10);
    }

}
void OutputNumArray( short Rows, short Cols)
{
    cout << "Matrix is :\n";
    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
        {
          
            printf("%0*d  ", 2, matrix[i][o]);
        }
        cout<<"\n";


    }

    cout << endl;
    cout << "Matrix2 is :\n";
    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
        {

            printf("%0*d  ", 2, matrix2[i][o]);
        }
        cout << "\n";


    }


}
void MultiArray(short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
        {
            matrix3[i][o] = matrix[i][o] * matrix2[i][o];

            
        }
   
    }
    cout << "Multiply Matrix one and 2\n";
    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
        {
            printf("%0*d    ", 3, matrix3[i][o]);


        }
        cout << "\n";


    }

}
