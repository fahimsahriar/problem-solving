#include<iostream>
#include<fstream>
#include <cmath>
using namespace std;

int main()
{
    ifstream iFile;
    iFile.open("input.txt");
    if(!iFile.is_open())
    {
        cout<<"Error in opening"<<endl;
    }
    int t;
    iFile>>t;
    //cin>>t;
    while(t--)
    {
        long long int n,x;
        iFile>>n;
        iFile>>x;
        //cin>>n>>x;
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            int temp;
            //cin>>temp;
            iFile>>temp;
            arr[i] = temp;
        }
        long long int v,c;
        c = 0;
        long long int m = 0;
        for(int i=0;i<n;i++)
        {
            m+=arr[i];
        }
        m=ceil(m/n);
        //cout<<m<<endl;
        if(abs(m-arr[0])>x)
        {
            v = arr[0];
        }
        else
        {
            v = m;
        }
        long long int temp;
        for(int i=0;i<n;i++)
        {
            temp = abs(v - arr[i]);
            if(temp>x)
            {
                v = m;
                temp = abs(v - arr[i]);
                if(temp>x)
                {
                    v = arr[i];
                }
                c++;
            }
        }
        cout<<c<<endl;
    }

    iFile.close();
}
