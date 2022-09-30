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
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr[i] = temp;
        }
        if(n%2==1)
        {
            cout<<"Mike"<<endl;
        }
        else
            cout<<"Joe"<<endl;
    }
    return 0;
}
