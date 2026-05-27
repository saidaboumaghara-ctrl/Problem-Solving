#include<iostream>
#include<ctime>
#include <iomanip>
#include<vector>
using namespace std;
int matrix[3][3];
void InputNumToArray(short Rows, short Cols);
void OutputNumArray(short Rows, short Cols);
void ifmatrixscalar(short Rows, short Cols);

int main()
{
    srand(time(NULL));
    InputNumToArray(3, 3);
    OutputNumArray(3, 3);
    ifmatrixscalar(3, 3);
   
    return 0;
}

void InputNumToArray(short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
            cin >> matrix[i][o];
    }




}
void OutputNumArray(short Rows, short Cols)
{
    cout << "Matrix is :\n";
    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
        {

           cout<< matrix[i][o]<<" ";
        }
        cout << "\n";


    }




}
void ifmatrixscalar(short Rows, short Cols)
{
    bool dog = false;
    int i = 0;
    if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])
        {
            for (int i = 0; i < Rows; i++)
            {
                for (int o = 0; o < Cols; o++)
                {
                    if (i != o && matrix[i][o]==0)
                    {
                        dog = true;
                        
                    }
                }
                cout << "\n";


            }
        }
        if(dog==true)
            cout << "Matrix is scalar \n";
   

}
