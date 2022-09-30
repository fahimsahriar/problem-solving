#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void mean(int arr[], int n)
{
    int sum = 0;
    float res;
    for(int i = 0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    res = (float)sum;
    res = res / n;
    cout<<res<<endl;
}
void median(int v[], int m)
{
    float result;
    int mid;
    sort(v, v + m);
    mid = (m/2);
    if(m%2==0)
    {
        mid = v[mid] + v[mid-1];
        result = (float)mid/2;
        cout<< result<<endl;

    }
    else
    {
        result = (float)v[mid];
        cout<< result<<endl;
    }
}
void mode(int arr[], int n)
{
    int arr2[n] = {0};
    for(int i=0;i<n;i++)
    {
        int j = i+1;
        while(arr[i]==arr[j])
        {
            arr2[i]++;
            j++;
        }
    }
    int m = 0,maxx = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr2[i]>maxx)
        {
            maxx=arr2[i];
            m = i;
        }
    }
    cout<<arr[m]<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    mean(arr,n);
    median(arr,n);
    mode(arr, n);

    return 0;
}
