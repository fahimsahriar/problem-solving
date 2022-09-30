#include<bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int sum;
        sum = 0;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            sum = sum+temp;
        }
        int r;
        r = sum - m;
        if(r<=0)
        {
            cout<<"0"<<endl;
        }
        else
            cout<<r<<endl;
    }
    return 0;
}
