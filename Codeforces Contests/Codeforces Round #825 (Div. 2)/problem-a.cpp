#include <iostream>
#include <vector>
using namespace std;
int diff(int a[],int b[], int n)
{
    int r;
    r = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            r++;
        }
    }
    if(r==0)
    {
        return 1;
    }else{
        return 0;
    }
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,ca,cb,steps;
        cin>>n;
        int a[n],b[n];
        ca = cb = steps = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                ca++;
            }
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]==1)
            {
                cb++;
            }
        }
        if(ca>cb)
        {
            for(int i=0;i<n;i++)
            {
                if(diff(a,b,n)==0)
                {
                    cout<<steps<<endl;
                    break;
                }
                if(ca==cb)
                {
                    steps++;
                }
                else if(a[i]!=b[i])
                {
                    steps++;
                    cb++;
                    a[i] == 0;
                }
            }
        }
        else if(cb>ca)
        {
            for(int i=0;i<n;i++)
            {
                if(diff(a,b,n)==0)
                {
                    cout<<steps<<endl;
                    break;
                }
                if(ca==cb)
                {
                    steps++;
                    ca++;
                }
                else if(a[i]!=b[i])
                {
                    steps++;
                    a[i] == 1;
                }
            }
        }
        else
        {
            if(diff(a,b,n)==0)
            {
                cout<<"0"<<endl;
            }else{
                cout<<"1"<<endl;
            }
        }
    }
}
