#include <iostream>
using namespace std;

int main()
{
    int n,sum,sum2,c;
    c = sum2 = sum = 0;
    cin>>n;
    int arr[n], brr[n] = {0};
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        sum = sum + temp;
        arr[i] = temp;
    }
    sum = sum/2;
    //cout<<sum<<endl;
    for(int i=(n-1);i>=0;i--)
    {
        if(arr[i]>arr[i-1])
        {
            brr[i] = brr[i] + arr[i];
            sum2 = sum2+brr[i];
            cout<<"Br:"<<brr[i]<<endl;
        }
        else
        {
            if(sum<sum2&&c==0)
            {
                c++;
                continue;
            }
            else if(sum<sum2)
            {
                brr[i] = brr[i] - arr[i];
            }
            else
            {
                brr[i] = brr[i]+arr[i];
                for(int j=i;j<n;j++)
                {
                    while(brr[j]>brr[j+1])
                    {
                        brr[j+1] = brr[j+1]+arr[j+1];
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
