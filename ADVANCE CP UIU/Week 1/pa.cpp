#include <iostream>
using namespace std;

long long int GCD(long long int A, long long int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,r;
        r = 0;
        cin>>n;
        for(long long int i=1;i<=n;i++)
        {
            for(long long int j=2;j<=i;j++)
            {
                if(i!=j)
                {
                    int temp;
                    temp = GCD(i,j);
                    cout<<temp<<" ";
                    if(temp>r)
                    {
                        r = temp;

                    }
                }
            }
            cout<<endl;
        }
        cout<<r<<endl;
    }
}


