#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,w;
        w = 0;
        cin>>n;
        if(n==0||n==1||n==2)
        {
            cout<<"0"<<endl;
        }
        else if(n%2==0)
        {
            cout<<n/2-1<<endl;
        }
        else
        {
            cout<<n/2<<endl;
        }
        //cout<<n<<endl;
        //cout<<x1<<y1<<x2<<y2;
    }
    return 0;
}
