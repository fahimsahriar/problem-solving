#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            int sum;
            sum = 0;
            //cout<<"new sum:"<<sum<<endl;
            //cout<<"curren arr[i]:"<<arr[i]<<endl;
            for(int j=0;j<n;j++)
            {
                if(j!=i)
                {
                    sum = sum ^ arr[j];
                    //cout<<"bitwise:"<<sum<<endl;
                }
            }
            if(sum==arr[i])
            {
                cout<<sum<<endl;
                break;
            }
        }
    }
    return 0;
}
