#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main()
{
    int h1,h2,h3;
    cin>>h1>>h2>>h3;
    int h1arr[h1],h2arr[h2],h3arr[h3];
    int a[h1],b[h2],c[h3];
    for(int i=0;i<h1;i++)
    {
        cin>>h1arr[i];
    }
    for(int j=0;j<h2;j++)
    {
        cin>>h2arr[j];
    }
    for(int k=0;k<h3;k++)
    {
        cin>>h3arr[k];
    }
    //cout<<"input ends"<<endl;
    int max_result = 0;
    int max_result_temp_one = 0;
    int max_result_temp_two = 0;
    int max_result_temp_three = 0;
    int i1 = 0;
    for(int i=h1-1;i>=0;i--)
    {
        max_result_temp_one+=h1arr[i];
        a[i1] = max_result_temp_one;
        i1++;
        //cout<<max_result_temp_one<<" ";
    }
    //cout<<endl;
    int j1=0;
    for(int j=h2-1;j>=0;j--)
    {
        max_result_temp_two+=h2arr[j];
        b[j1] = max_result_temp_two;
        j1++;
        //cout<<max_result_temp_two<<" ";
    }
    //cout<<endl;
    int k1 = 0;
    for(int k=h3-1;k>=0;k--)
    {
        max_result_temp_three+=h3arr[k];
        c[k1] = max_result_temp_three;
        k1++;
        //cout<<max_result_temp_three<<" ";
    }
    //cout<<endl;
    //cout<<"Result part"<<endl;
    for(int k=0;k<h1;k++)
    {
        int temm1 = binarySearch(b, 0, h2 - 1, a[k]);
        //cout<<a[k]<<endl;
        //cout<<"1st result"<<temm1<<endl;
        if(temm1!=-1)
        {
            int temm2 = binarySearch(c, 0, h3 - 1, a[k]);
            //cout<<"2nd result"<<temm2<<endl;
            if(temm2!=-1)
            {
                if(a[k]>max_result)
                {
                    max_result = a[k];
                }
            }
        }
    }
    cout<<max_result<<endl;


    return 0;
}

