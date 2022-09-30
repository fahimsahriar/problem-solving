#include <bits/stdc++.h>
using namespace std;
int f=0,s=0;

void go(long long int n)
{
    while(n!=0)
    {
        if(n%10==4||n%10==7)
        {
            f++;
        }
        n = n/10;
    }
    if(f==4||f==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}

int main()
{
    long  long int n;
    cin>>n;
    go(n);
	return 0;
}
