#include<iostream>
#include<ctime>
#include <iomanip>
using namespace std;
int RandomNumber();
void InputRondomnum(short Rows, short Cols);
int main()
{
    srand(time(NULL));
    InputRondomnum(3,3);




	return 0;
}

int RandomNumber()
{
    //Function to generate a random number
    int randNum = rand() % (100 - 1 + 1) + 1;
    return randNum;
}
void InputRondomnum(short Rows,short Cols)
{
    int matrix[3][3];
    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
        {
            matrix[i][o] =  RandomNumber();
        }


    }
    cout << "Matrix is  :"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int o = 0; o < 3; o++)
        {
            cout<<setw(10)<<matrix[i][o]<<"  " ;
        }
        cout << endl;

    }
}
