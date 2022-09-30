#include <iostream>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;
    int a[n];
    long long int d1[n];
    long long int d2[n];
    d1[0] = 0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a[i] = temp;
        if(i>0&&a[i-1]>temp)
        {
            d1[i] = d1[i-1] + a[i-1] - a[i];
        }
        else
        {
            d1[i] = d1[i-1];
        }

    }
    d2[n-1] = 0;
    for(int i=n-1;i>=0;i--)
    {
        if(i<n-1&&a[i]<a[i+1])
        {
            //cout<<a[i+1] - a[i]<<" Added"<<endl;
            d2[i] = d2[i+1] + a[i+1] - a[i];

        }
        else
        {
            d2[i] = d2[i+1];
        }

    }
    for(int i=0;i<m;i++)
    {
        int sj,tj;
        cin>>sj>>tj;
        if(sj<tj)
        {

            cout<<d1[tj-1]-d1[sj-1]<<endl;
        }
        else if(sj>tj)
        {

            cout<<d2[tj-1]-d2[sj-1]<<endl;
        }
    }
    return 0;
}
