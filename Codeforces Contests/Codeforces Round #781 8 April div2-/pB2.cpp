#include<bits/stdc++.h>

using namespace std;

bool echek(int rr[], int n)
{
    for(int i =1;i<n;i++)
        {
            if(rr[0]!=rr[i]&&n>1)
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
        }
        if(echek(rr,n))
        {
            step = n;
        }
        cout<<"result:"<<step<<endl;
    }
    return 0;
}
