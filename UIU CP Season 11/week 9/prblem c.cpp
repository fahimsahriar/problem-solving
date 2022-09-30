#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int l;
        l = str.size();
        int arr[l];
        if(str[l-1]=='N')
        {
            arr[0] = 1;
            arr[l-1] = 2;
            for(int i=1;i<l-1;i++)
            {
                if(str[i-1]=='N')
                {
                    if(arr[i-1]+1==2)
                        arr[i] = 3;
                    else
                        arr[i] = arr[i-1]+1;
                }
                else
                {
                    arr[i] = arr[i-1];
                }
            }
        }
        else
        {
            arr[0] = arr[l-1] = 1;
            for(int i=1;i<l-1;i++)
            {
                if(str[i-1]=='N')
                {
                    arr[i] = arr[i-1]+1;
                }
                else
                {
                    arr[i] = arr[i-1];
                }
            }
        }
//        for(int i=0;i<l;i++)
//        {
//            cout<<arr[i]<<" ";
//        }
        if(str[l-2]=='N')
        {
            if(arr[l-1]==arr[l-2]) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else
        {
            //cout<<l-3<<"do"<<endl;
            if((l-3>=0)&&str[l-3]=='N')
            {
                if(str[l-1]=='E')
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;
            }
            else if(arr[l-1]!=arr[l-2]) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }

    }
    return 0;
}
//ababab
