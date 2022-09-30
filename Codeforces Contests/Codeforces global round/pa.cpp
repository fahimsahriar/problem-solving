#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        c = 0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr[i] = temp;
            if(temp>1)
            {
                c = c + temp - 1;
            }
        }
        //cout<<c<<endl;
        if(c%2==0)
        {
            cout<<"maomao90"<<endl;
        }
        else
        {
            cout<<"errorgorn"<<endl;
        }
    }
}
