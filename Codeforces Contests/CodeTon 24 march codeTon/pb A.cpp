#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h,l,hh,ll;
        cin>>n;
        int rr[n];
        for(int i=0;i<n;i++)
        {
            cin>>rr[i];
        }
        h = l = rr[0];
        hh = ll = 0;
        for(int i=0;i<n;i++)
        {
            if(h<rr[i])
            {
                h = rr[i];
                hh = i;
            }
            if(l>rr[i])
            {
                l = rr[i];
                ll = i;
            }
        }
        if(hh<ll)
            cout<<hh+1<<" "<<ll+1<<endl;
        else
            cout<<ll+1<<" "<<hh+1<<endl;

    }
    return 0;
}
