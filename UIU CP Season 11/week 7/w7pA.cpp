#include <bits/stdc++.h>
using namespace std;

float runningMedian(int i, vector<int> v)
{
    float result,mid;
    int m = i+1;
    sort(v.begin(), v.end());
    mid = (m/2);
    if(m%2==0)
    {
        mid = (float)v[mid] + (float)v[mid-1];
        result = (float)mid/2;
        return result;

    }
    else
    {
        result = (float)v[mid];
        return result;
    }
}

int main()
{
    float result;
    int t,n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        v.push_back(t);
        result = runningMedian(i,v);
        printf("%.1f\n",result);
    }
	return 0;
}

