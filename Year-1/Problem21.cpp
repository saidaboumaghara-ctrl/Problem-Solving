//Lucky numbers
#include <iostream>
#include<cmath>
using namespace std;
bool luckynumbers(int i)
{
    while (i>0)
    {
        int  digit = i % 10;
        if (digit != 7 && digit != 4)
        {

            return false;

        }
        i /= 10;
       
    }


    return true;
}



int main()
{
    int A, B,count=0;
    cin >> A >> B;
    bool x = false;
    for (int i = A; i <= B; i++)
    {
        if (luckynumbers(i) == true)
        {
            cout << i << " ";
            x = true;
        }
    }   
    if (x==false)
        cout << "-1" << endl;
    
    return 0;
}
