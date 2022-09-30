#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int drr[n];
        int brr[n];
        for(int i=0;i<n;i++){
            cin>>drr[i];
        }
        brr[0] = drr[0];
        int r;
        r = 0;
        for(int i = 1;i<n;i++)
        {
            if((brr[i-1]-drr[i])>=0)
            {
                if((brr[i-1]-drr[i])==(brr[i-1]+drr[i])){
                    brr[i] = drr[i] + brr[i-1];
                }else{
                    r = -1;
                    break;
                }
            }
            else
            {
                brr[i] = drr[i] + brr[i-1];
            }
        }
        if(r==0){
            for(int i = 0;i<n;i++)
            {
                cout<<brr[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}

