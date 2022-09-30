#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r;
        r = 0;
        cin>>n;
        int m = 4*n;
        vector<int> rr;
        vector<int> rr2;
        for(int i=0;i<m;i++)
        {
            int t;
            cin>>t;
            rr.push_back(t);
            rr2.push_back(0);
        }
        for(int i=0;i<rr.size()-1;i++)
        {
            for(int j = i+1;j<rr.size();j++)
            {
                if(rr[i]==rr[j])
                {
                    rr2[i] = rr2[i] + 2;
                    rr2[j] = rr2[j] + 2;
                    break;
                }
            }
        }
        for(int i =0;i<rr2.size();i++)
        {
            cout<<rr2[i]<<endl;
            if(rr2[i]%2==0)
            {
            }
            else
            {
                r = 1;
            }
        }
        if(r>0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
