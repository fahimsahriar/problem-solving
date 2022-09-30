#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int rr[n],t;
        for(int i=0;i<n;i++)
        {
             cin>>t;
             rr[i] = t;
        }
        for(int = 0;i<n;i++)
        {
            int c;
            c = 32768/rr[i];
            c = c*rr[i];
            c = 32768 - c;
            c = abs(c);
        }

    }
    return 0;
}
