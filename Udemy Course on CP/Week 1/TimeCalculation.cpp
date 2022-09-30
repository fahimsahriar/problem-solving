#include <bits/stdc++.h>
#include <ctime>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++)
    {
        arr[i] = n - i;
    }
    clock_t start_time = clock();
    cout<<(float)start_time<<endl;
    sort(arr, arr + n);
    clock_t end_time = clock();
    cout<<(float)end_time<<endl;
    cout<<(float)end_time-(float)start_time<<endl;
}
