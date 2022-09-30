#include<bits/stdc++.h>

using namespace std;

bool echek(int rr[], int n)
{
    for(int i =0;i<n;i++)
        {
            if(rr[0]!=rr[i])
            {
                return true;
            }
            else if(i==n-1)
            {
                return false;
            }
        }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, step = 0;
        int t = 1;
        cin>>n;
        int rr[n],rr2[n];
        for(int i=0;i<n;i++)
        {
            cin>>rr[i];
            rr2[i] = rr[i];
        }
        while(echek(rr,n))
        {
            step++;
            rr[t] = rr2[0];
            rr[t+1] = rr2[1];
            rr2[1] = rr2[0];
            step++;
            t++;
        }
        if(step>0)
        {
            cout<<step<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}
