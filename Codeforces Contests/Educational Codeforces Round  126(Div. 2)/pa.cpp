#include<bits/stdc++.h>
using namespace std;

long long int sm(long long int rr[], long long int n)
{
    long long int s = 0;
    for(int i=0;i<n;i++)
    {
        s = s + abs(rr[i]);
    }
    return s;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,t;
        cin>>n;
        long long int b[n],c[n];
        for(int i=0;i<n;i++)
        {
            cin>>t;
            b[i] =t;
        }
        for(int i=0;i<n;i++)
        {
            cin>>t;
            c[i] = t;
        }
        long long int r_sum;
        r_sum = sm(b,n);
        if(sm(b,n)>sm(c,n))
        {
            for(int i=0;i<n;i++)
            {
                r_sum = sm(b,n);
                long long int t;
                t = b[i];
                b[i] = c[i];
                c[i] = t;
                if(sm(b,n)<r_sum)
                {
                    t = b[i];
                    b[i] = c[i];
                    c[i] = t;
                }
                else
                {
                    r_sum = sm(b,n);
                }
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                r_sum = sm(b,n);
                long long int t;
                t = b[i];
                b[i] = c[i];
                c[i] = t;
                if(sm(b,n)>r_sum)
                {
                    t = b[i];
                    b[i] = c[i];
                    c[i] = t;
                }
                else
                {
                    r_sum = sm(b,n);
                }
            }
        }
        long long int tt,rr_sum = 0;
        for(int i=0;i<n-1;i++)
        {
            tt = b[i] - b[i+1];
            rr_sum = rr_sum + abs(tt);
            tt = c[i] - c[i+1];
            rr_sum = rr_sum + abs(tt);
        }
        cout<<rr_sum<<endl;
    }
    return 0;
}
