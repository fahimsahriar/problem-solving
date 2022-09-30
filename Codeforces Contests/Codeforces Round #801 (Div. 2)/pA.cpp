#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr[i] = temp;
        }
        int w,p,q;
        p = 1;
        int i =0;
        while(true)
        {
            q = p-1;
            if(arr[q]!=-1)
            {
                if(i%2==0)
                {
                    cout<<"Mike removed "<<p<<"th pile"<<endl;
                }
                else
                    cout<<"Joe removed "<<p<<"th pile"<<endl;
                arr[q] = -1;
                p = (p%n)+1;
            }
            else
            {
                w = i;
                break;
            }
            i++;
        }
        if(w%2==1)
        {
            cout<<"Mike"<<endl;
        }
        else
            cout<<"Joe"<<endl;
    }
    return 0;
}
