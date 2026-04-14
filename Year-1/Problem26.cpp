#include <iostream>
#include<vector>
using namespace std;
int arr[100] = {};
int ReadNumToArray(string massege)
{
    int num=0;
   
    cout << massege << endl;
    cin >> num;
    
    return num;
}
int EnterNumToArray(int num)
{
    cout << "Please enter array numbers" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    
    return num;

}
void IfArrayPlindrome(int num)
{
    int arr2[100] = {};
    int X = num;
    bool trueor = false;
    cout << "Your array numbers is ";
    for (int i = 0; i < num; i++)
    {
       cout << arr[i] << " ";
      
       arr2[X - 1] = arr[i];
       X--;
        
}
    cout << endl;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] == arr2[i])
            trueor = true;

   }
    if (trueor == true)
        cout << "Yes Array is a palindrome";
    else
        cout << "No is not ";

}
int main()
{
    IfArrayPlindrome(EnterNumToArray(ReadNumToArray("Please enter number !")));




    return 0;
}
