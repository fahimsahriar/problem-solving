#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r,b;
        cin>>n>>r>>b;
        int p,k;
        p = ceil(n/(b+1));
        k = p;
        //cout<<p<<endl;
        for(int i=0;i<n;i++)
        {
            //j = p;
            if(i==p)
            {
                cout<<"B";
                p = p + k;
                p++;
                b--;
            }
            else
            {
                //if(r<1)
                cout<<"R";
                r--;
            }
            if(r==b)
            {
                k = ceil((n-i)/(b+1));
                //k = p;
            }
        }
        cout<<endl;
        //cout<<ceil(2.5);
    }
    return 0;
}

