#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,b,x,y;
        long long sum = 0;
        cin>>n>>b>>x>>y;
        long long c = 0;
        for(int i=1;i<=n;i++)
        {
            if((c+x)<=b)
            {
                c = c + x;
                sum = sum + c;
            }
            else
            {
                c = c - y;
                sum = sum + c;
            }
        }

        cout<<sum<<endl;
    }
    return 0;
}

