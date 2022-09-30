#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        int ll,l = INT_MIN;
        cin>>n>>k;
        vector<int> g1;
        for(int i=0;i<n-1;i++)
        {
            int t;
            cin>>t;
            g1.push_back(t);
        }
        while(n--)
        {
            for(int i=0;i<g1.size();i++)
            {
                if(g1[i]<l)
                {
                    l = gr[i];
                    ll = i;
                }
            }
            g1.erase( g1.begin() + ll );
            for(int i=0;i<g1.size();i++)
            {
                g1[i] = g1[i] - l;
            }

        }
    }
    return 0;
}

