#include<iostream>
#include<ctime>
#include <iomanip>
#include<vector>
using namespace std;
int matrix[3][3];
int RandomNumber(int From, int To);
void InputNumToArray(short Rows, short Cols);
void OutputNumArray(short Rows, short Cols);
void Summatrix(short Rows, short Cols);
int main()
{
    srand(time(NULL));
    InputNumToArray(3, 3);
    OutputNumArray(3, 3);
    Summatrix(3, 3);
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

    
    

}
void Summatrix(short Rows, short Cols)
{
    int sum = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
        {
            sum += matrix[i][o];
            
        }
        


    }
    cout << "Sum of matrix is :  " << sum;


}
