//Word encryption
#include <iostream>
using namespace std;
string inputword(string masseg)
{
    string word;
        cout << masseg << endl;
        cin >> word;
        return word;
}
void Encryption(string word)
 {

   
    for (int o = 0;o < word.length();o++) 
    {
        
        char word2 = word[o] + 4;
        cout << word2;
       
       
    }
    cout << endl;
}
 void DecEncryption()
 {
     
     
     string word3;
     cout << "Please enter your Decencryption !\n";
     cin >> word3;
   
     for (int o = 0; o < word3.length(); o++)
     {
         
         char word33 = word3[o] - 4;
         
         cout << word33;
         
        
     }
    cout << endl;

    
 }
int main()
{
    Encryption(inputword("Please enter your word"));
    DecEncryption();
   


        
   
    return 0;
}
