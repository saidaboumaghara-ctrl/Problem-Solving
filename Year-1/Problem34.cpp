#include<iostream>
#include<ctime>
#include <iomanip>
#include<vector>
using namespace std;
int matrix[3][3];
int RandomNumber(int From, int To);
void InputNumToArray(short Rows, short Cols);
void OutputNumArray(short Rows, short Cols);
void printmiddlerow(short Rows, short Cols);
void printmiddlecol(short Rows, short Cols);
int main()
{
    srand(time(NULL));
    InputNumToArray(3, 3);
    OutputNumArray(3, 3);
    printmiddlerow(3, 3);
    printmiddlecol(3, 3);
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
void printmiddlerow(short Rows, short Cols)
{
    cout << "Middle Rows is : " << endl;
    for (int i = 0; i < Rows;i++)
    {
        printf("%0*d  ", 2, matrix[1][i]);
    }
}
void printmiddlecol(short Rows, short Cols)
{
    cout << endl;
    cout << "Middle Cols is : " << endl;
    for (int i = 0; i < Cols; i++)
    {
        printf("%0*d  ", 2, matrix[i][1]);
        cout << endl;
    }
}
