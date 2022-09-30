#include <iostream>
using namespace std;

int main() {
    int n,t,temp;
    cin>>t;
    while(t!=0)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            temp = arr[i] | arr[i+1];
            arr[i] = 0;
            arr[i+1] = temp;
        }
        cout<<arr[n-1]<<endl;
        t--;
    }
    return 0;
}
