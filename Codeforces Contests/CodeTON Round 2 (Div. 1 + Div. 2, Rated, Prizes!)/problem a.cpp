#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string a;
        string b;

        cin>>a;

        cin>>b;
        int oa,za;
        oa = za = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='1')
            {
                oa++;
            }
            else
            {
                za++;
            }
        }
        int ob,zb;
        ob = zb = 0;
        for(int i=0;i<m;i++)
        {
            if(b[i]=='1')
            {
                ob++;
            }
            else
            {
                zb++;
            }
        }
        //cout<<oa<<" "<<ob<<" "<<za<<" "<<zb<<endl;

        if(oa>=ob&&za>=zb)
        {
            int j,f;
            f = 1;
            j = 1;
            for(int i=n-m+1;i<n;i++)
            {
                if(a[i]!=b[j])
                {
                    f = 0;
                }
                j++;
            }
            if(f==1)
            {
                cout<<"Yes"<<endl;
            }
            else
                cout<<"No"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
