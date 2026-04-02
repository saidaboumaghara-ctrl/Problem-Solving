//password
#include <iostream>
using namespace std;
string ReadOrginalPassword()
{
    string orgpassword;
    cout<<"Please enter a 3-Letter Password (all capital)?\n";
    cin >> orgpassword;
    return orgpassword;


}

int forLetter(string orgpassword)
{
    int loop = 0;
    string word = "";
    for (int i = 65; i <= 90; i++)
    {
        for (int o = 65; o <= 90; o++)
        {
            for (int p = 65; p <= 90; p++)
            {
                loop ++ ;
                word = (char)i;
                word += (char)o;
                word += (char)p;
                cout << "TRIAL NUMBER IS" <<"[" << loop << "]" << word << endl;
                if (word == orgpassword)
                {
                    cout << "TRIAL NUMBER IS" << "[" << loop << "]" <<"YOUR PASSWORD     " << word << endl;

                    return 0;
                }
            }
        }

        
    }



}

int main()
{


    forLetter(ReadOrginalPassword());
    



        
   
    return 0;
}
