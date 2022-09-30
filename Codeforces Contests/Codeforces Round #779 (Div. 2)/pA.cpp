#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,f,c;
        f = m = c = 0;
        cin>>n;
        string s;
        cin>>s;
        for(int i =0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(s[i+1]=='0')
                {
                    c=c+2;
                }
            }
            else if(s[i]=='1')
            {
                if(s[i+1]=='0'&&s[i-1]=='0')
                {
                    c=c+1;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
