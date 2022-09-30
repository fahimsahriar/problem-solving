// C++ program to demonstrate getline() function

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t;i++)
    {
       	string str;
        char a;
        cin>>str;
        cin>>a;
        for(int j=0;j<str.length();j++)
        {
            if(str[j]==a&&j%2==0)
            {
                cout<<"YES"<<endl;
                break;
            }
            else if(j==str.length()-1)
            {
                cout<<"NO"<<endl;
            }
        }
    }


	return 0;
}


