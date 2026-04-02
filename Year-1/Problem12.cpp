//generete key
#include <iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
int  RandomNumbersGenerete()
{
    int randomNum = rand() %25+66;
    return randomNum;
}
int main()
{
    srand(time(NULL));
    int returne;
    cout << "How many key are required?" << endl;
    cin >> returne;
    while (returne)
    {
        int retuneyourletters = 1;
        cout << "key" << "[" << returne << "]";
        while (retuneyourletters<5)
        {
           
            for (int i = 0; i <= 4;i++) {
            
             char capitallatter= RandomNumbersGenerete();
             cout << capitallatter;
              
            }
            cout << "-";
         
            retuneyourletters++;
    }
        
        cout << endl;
        returne--;
    }


    return 0;
}
