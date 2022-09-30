#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long int sumR=0;
        cin >> n;
        int arr[n];
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr + n);
        int j = n-1;
        int k = 0;
        long long int sumB;
        sumB = arr[0];
        while(j>1&&k<n)
        {
            sumR = sumR + arr[j];
            //out<<"sumR:"<<sumR<<endl;
            sumB = sumB + arr[++k];
            //cout<<"sumB:"<<sumB<<endl;
            if(sumR>sumB)
            {
                cout<<"YES"<<endl;
                break;
            }
            j--;
            //cout<<"---"<<endl;
        }
        if(j==1)
            cout<<"NO"<<endl;
    }
}
