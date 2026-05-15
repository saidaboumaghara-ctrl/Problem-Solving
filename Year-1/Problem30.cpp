#include<iostream>
#include<ctime>
#include <iomanip>
#include<vector>
using namespace std;
int matrix[3][3];
int RandomNumber(int From, int To);
void InputNumToArray(short Rows, short Cols);
void OutputNumArray(short Rows, short Cols);
void SumRows(short Rows, short Cols);

int main()
{
    srand(time(NULL));
    InputNumToArray(3, 3);
    OutputNumArray(3, 3);
    SumRows(3,3);




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
            matrix[i][o] = RandomNumber(1, 100);
    }


   

}
void OutputNumArray( short Rows, short Cols)
{
    cout << "Matrix is :\n";
    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
        {
          
            cout << setw(3)<<matrix[i][o] << " ";
        }
        cout<<"\n";
    }
  


}
void SumRows(short Rows, short Cols)
{
    vector<int>sum(Rows) ;
    for (int i = 0; i < Rows; i++)
    {
        for (int o = 0; o < Cols; o++)
        {

            sum[i] += matrix[i][o];
        }
        
       
    }
    int o = 1;
    cout << "Matrix Rows sum is : \n";
    for (int i : sum)
    {
       
        cout << " Row" << o << " ="<<setw(3) << i << endl;
        o++;
    }
}
