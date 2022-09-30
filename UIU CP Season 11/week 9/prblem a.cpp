#include <iostream>
using namespace std;

int main() {
    int t,t1;
    int arr[3];
    cin>>t;
    int k,j;
    while(t--)
    {
        t1=0;
        cin>>arr[0];
        cin>>arr[1];
        cin>>arr[2];
        if((arr[0]+arr[1])==arr[2])
        {
            t1=1;
        }
        else if(arr[0]==arr[1]+arr[2])
        {
            t1=1;
        }
        else if(arr[1]==arr[0]+arr[2])
        {
            t1=1;
        }
        else if(arr[0]%2==0&&arr[1]==arr[2])
        {
            //cout<<arr[1]<<" "<<arr[2]<<" "<<arr[0]/2<<" "<<arr[0]/2<<endl;
            t1=1;
        }
        else if(arr[1]%2==0&&arr[0]==arr[2])
        {
            //cout<<arr[0]<<" "<<arr[2]<<" "<<arr[1]/2<<" "<<arr[1]/2<<endl;
            t1=1;
        }
        else if(arr[2]%2==0&&arr[1]==arr[0])
        {
            //cout<<arr[1]<<" "<<arr[0]<<" "<<arr[2]/2<<" "<<arr[2]/2<<endl;
            t1=1;
        }
        if(t1==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
