#include<bits/stdc++.h>
#include <math.h>
using namespace std;

bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {

        long long sr = sqrt(x);

        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long double x,y;
        cin>>x>>y;
        long double p;
        p = pow(x, 2);
        p = p + pow(y, 2);
        //p = sqrt(p);
        //cout<<p<<endl;
        bool j;
        j = isPerfectSquare(p);
        //cout<<j<<endl;
        if(x==0&&y==0)
            cout<<0<<endl;
        else if(!j)
        {
            cout<<2<<endl;
        }
        else
            cout<<1<<endl;
    }
    return 0;
}
