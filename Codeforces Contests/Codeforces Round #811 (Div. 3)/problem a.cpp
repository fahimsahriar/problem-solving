#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int h,m;
        cin>>h>>m;
        int arr[n][2];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i][0]>>arr[i][1];
        }
        int mn,mi;
        mn = 25;
        for(int i=0;i<n;i++)
        {
            if(arr[i][0]<<mn)
            {
                mn = arr[i][0];
                mi = i;
            }
            //cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
        }
        if(arr[mi][0]<h)
        {
            h = 24+arr[mi][0] - h;
        }
        else
        {
            h = arr[mi][0]-h;
        }
        if(arr[mi][0]<m)
        {
            h--;
            m = 60+arr[mi][1]-m;
        }
        else
        {
            m = arr[mi][1] - m;
        }
        cout<<h<<" "<<m<<endl;
    }
    return 0;
}
