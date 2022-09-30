#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,p,r,k,l,e,d;
        l = k = r = p = d = 0;
        c = 0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr[i] = temp;
        }
        for(int i=0;i<n;i++)
        {
            int temp_i;
            temp_i = i;
            if(i>0&&arr[i-1]==arr[i])
            {
                d = d + (i-e);
                k++;
                int j;
                j = i;
                c = 0;
                while((i>0)&&(arr[j-1]==arr[j]))
                {
                    c++;
                    j++;
                    if(j==n-1)
                    {
                        if(arr[j-1]==arr[j])
                        {
                            c++;
                        }
                        break;
                    }
                }
                if(c>1)
                {
                    k = k + c - 1;
                    cout<<"Con Pairs:"<<c<<endl;
                }
                i = j ;
                e = i;
            }
            if(i!=k)
            {
                l = 1;
            }
        }
        cout<<"Pairs:"<<k<<endl;
        cout<<"Distance:"<<d<<endl;
        if(l==0)
        {
            cout<<"Yes"<<endl;
        }
    }
}

