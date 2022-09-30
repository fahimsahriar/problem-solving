#include <iostream>
using namespace std;

int main()
{
    int j,n = 10, i  = 1;
    bool re[n];
    for(int i = 0;i<n;i++)
    {
        re[i] = true;
        //cout<<re[i]<<endl;
    }
    while(i<n)
    {
        if(re[i]==true){
            j = i+2;
            //cout<<"when I:"<<i+1<<". ";
            while(j<=n)
            {
                if(j%(i+1)==0&&re[j-1]==true)
                {
                    re[j-1] = false;
                    //cout<<"-->eliminating:"<<j<<endl;
                }
                else{
                    //cout<<"condition falls at:"<<j<<endl;
                }
                j++;
            }
            //cout<<endl;
        }
        i++;
    }
    //cout<<"nothing left to eliminate"<<endl;
    for(int i = 1; i < n; i++)
    {
        if(re[i]==true)
            cout<<i+1<<" ";
    }

    return 0;
}
