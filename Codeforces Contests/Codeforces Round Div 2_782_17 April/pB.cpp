#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<"Hello"<<t<<endl;
        int n,k;
        cin>>n>>k;
        cout<<"N is:"<<n<<" K is:"<<k<<endl;
        int tem;
        for(int i=0;i<n;i++)
        {
            cin>>tem;
            cout<<tem<<" ";
        }
        cout<<endl;
    }
    return 0;
}
