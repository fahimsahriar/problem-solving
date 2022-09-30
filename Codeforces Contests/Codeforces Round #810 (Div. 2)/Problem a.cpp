#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int j = 0;
        if(n%2==0)
        {
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    j = j+2;
                    cout<<j<<" ";
                }
                else
                {
                    cout<<i<<" ";
                }
            }
        }
        else
        {
            int j = n;
            for(int i=0;i<n;i++)
            {
                if(i%2==0&&i!=n-1)
                {
                    cout<<i+2<<" ";
                }
                else
                {
                    cout<<j<<" ";
                    j = j-2;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
