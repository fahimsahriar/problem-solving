#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,e,a,b;
        a = b = e = 0;
        string s;
        cin>>s;
        l= s.length();
        for(int i=0;i<l;i++)
        {
            if(s[i]=='B')
            {
                if(a>b)
                {
                    b++;
                }
                else
                {
                    e = 1;
                    break;
                }
            }
            else
            {
                a++;
            }
        }
        if(s[l-1]!='B'||l==1)
        {
            e = 1;
        }
        //cout<<e<<endl;
        if(e==0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}

