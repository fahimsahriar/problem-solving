#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char n;
        cin>>n;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==n)
            {
                if(i%2==0)
                {
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(i==s.length()-1)
                cout<<"NO"<<endl;
        }
        //if()

    }
    //cout<<"Hello";
    return 0;
}

