#include <iostream>
using namespace std;

void rvereseArray(int arr[], int start, int endd)
{
    while (start < endd)
    {
        int temp = arr[start];
        arr[start] = arr[endd];
        arr[endd] = temp;
        start++;
        endd--;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            //cout<<i+1<<" "<<arr[i]<<endl;
            if((i+1)!=arr[i])
            {
                for(int j=i+1;j<n;j++)
                {
                    //cout<<j<<" yo "<<arr[j]<<endl;
                    if(arr[j]==i+1)
                    {
                        rvereseArray(arr,i,j);
                        break;
                    }
                }
                break;
            }
        }
        for(int i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
