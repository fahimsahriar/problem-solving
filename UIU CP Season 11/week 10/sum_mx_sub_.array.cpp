#include <bits/stdc++.h>

using namespace std;

int fun(vector<int> v)
{
    int mx_so_fr = 0;
    int t_mx = 0;
    for(int i = 0;i<v.size();i++)
    {
        t_mx = t_mx + v[i];
        if(mx_so_fr<t_mx)
        {
            mx_so_fr = t_mx;
        }
        if(t_mx<0)
        {
            t_mx = 0;
        }
    }
    return mx_so_fr;
}
void fun2(vector<int> v)
{
    int s1,s,e,mx_so_fr = 0;
    s = 0;
    int t_mx = 0;
    for(int i = 0;i<v.size();i++)
    {
        t_mx = t_mx + v[i];
        if(mx_so_fr<t_mx)
        {
            mx_so_fr = t_mx;
            e = i;
            s1 = s;
        }
        if(t_mx<0)
        {
            t_mx = 0;
            s = i+1;
        }
    }
    cout<<"strt:"<<s1<<" end:"<<e<<endl;
}
int main()
{
    vector<int> v = {5,2,-6,2,-10,1,4,-1,-2,6,-8,2,5,-9};
    cout<<"Mx sum is: "<<fun(v)<<endl;
    fun2(v);
    return 0;
}
