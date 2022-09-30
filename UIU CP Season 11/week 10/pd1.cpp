#include <bits/stdc++.h>

using namespace std;
int mi,mx,sum=0;

int mi_f(int rr[],int s)
{
    mi = INT_MAX;
    for(int i=0;i<s;i++)
    {
        if(rr[i]<mi)
            mi = rr[i];
    }
}
int mx_f(int rr[], int s)
{
    mx = 0;
    for(int i=0;i<s;i++)
    {
        if(rr[i]>mx)
            mx = rr[i];
    }
}

int ee(int rr[],int s)
{
    int c = 1;
    for(int i=1;i<s;i++)
    {
        if(rr[0]==rr[i])
            c++;
    }
    return c;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,c,st = 0;
        cin>>s;
        int rr[s];
        for(int i=0;i<s;i++)
        {
            cin>>rr[i];
        }
        c = ee(rr,s);
        while(c!=s)
        {
            mi_f(rr,s);
            mx_f(rr,s);
            //cout<<"the mx is:"<<mx<<endl;
            //cout<<"the min is:"<<mi<<endl;
            if((mx-mi)>=5)
            {
                for(int i=0;i<s;i++)
                {
                    if((mx - rr[i])>=5)
                    {
                        rr[i] = rr[i]+5;
                        st++;
                    }
                }
            }
            else if((mx-mi)>=2)
            {
                for(int i=0;i<s;i++)
                {
                    if((mx - rr[i])>=2)
                    {
                         rr[i] = rr[i]+2;
                         st++;
                    }
                }
            }
            else
            {
                for(int i=0;i<s;i++)
                {
                    if((mx - rr[i])>=1)
                    {
                        rr[i] = rr[i]+1;
                        st++;
                    }
                }
            }
            c = ee(rr,s);
            /*for(int i=0;i<s;i++)
            {
                cout<<rr[i]<<" ";
            }*/
            //cout<<endl;
        }
        //for(int i=0;i<s;i++)
        //{
                //cout<<rr[i]<<" ";
        //}
        cout<<endl<<st<<endl;

     }
    return 0;
}
