#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,s;
        s = c = 0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr[i]=temp;
            if(i>0)
            {
                if(temp%2==0)
                {
                    if(arr[i-1]%2==1)
                    {

                    }
                    else
                    {
                        c++;
                    }
                }
                else
                {
                    if(arr[i-1]%2==0)
                    {

                    }
                    else
                    {
                        c++;
                    }
                }
            }
        }
        if(arr[0]%2==0)
        {
            for(int i=1;i<n;i++)
            {
                if(arr[i]%2==0)
                {

                }
                else
                {
                    s++;
                }
            }
        }
        else
        {
            for(int i=1;i<n;i++)
            {
                if(arr[i]%2==1)
                {

                }
                else
                {
                    s++;
                }
            }
        }
        if(c==0)
        {
            cout<<"Yes"<<endl;
        }
        else if(s==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}

